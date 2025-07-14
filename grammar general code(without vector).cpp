#include <iostream>
#include <cstring>
using namespace std;

#define MAX_RULES 10
#define MAX_PRODUCTIONS 10
#define MAX_RHS 10
#define MAX_STACK 100
#define MAX_INPUT 100

char lhs[MAX_RULES];
char rhs[MAX_RULES][MAX_PRODUCTIONS][MAX_RHS];
int productionCount[MAX_RULES], ruleCount;

char input[MAX_INPUT];
int inputLen;

bool isTerminal(char c)
{
    return islower(c) || isdigit(c);
}

bool parse(int pos, char stack[], int size)
{
    if (size == 0 && pos == inputLen)
        return true;
    if (size == 0 || pos > inputLen)
        return false;

    char top = stack[--size];

    if (isTerminal(top))
    {
        return (pos < inputLen && input[pos] == top) ? parse(pos + 1, stack, size) : false;
    }

    for (int i = 0; i < ruleCount; i++)
    {
        if (lhs[i] != top)
            continue;
        for (int j = 0; j < productionCount[i]; j++)
        {
            char newStack[MAX_STACK];
            memcpy(newStack, stack, size);

            if (strcmp(rhs[i][j], "e") != 0)
            {
                int len = strlen(rhs[i][j]);
                for (int k = len - 1; k >= 0; k--)
                    newStack[size++] = rhs[i][j][k];
            }

            if (parse(pos, newStack, size))
                return true;
            size -= strlen(rhs[i][j]); // backtrack
        }
    }
    return false;
}

void takeGrammarInput()
{
    cout << "Enter number of production rules: ";
    cin >> ruleCount;
    cin.ignore();

    for (int i = 0; i < ruleCount; i++)
    {
        string line;
        getline(cin, line);
        lhs[i] = line[0];

        int j = 0, k = 0;
        bool arrow = false;
        for (size_t idx = 0; idx < line.size(); idx++)
        {
            if (!arrow && line[idx] == '-' && idx + 1 < line.size() && line[idx + 1] == '>')
            {
                arrow = true;
                idx++; // skip '>'
                continue;
            }
            if (!arrow)
                continue;

            if (line[idx] == '|')
            {
                rhs[i][j][k] = '\0';
                j++;
                k = 0;
            }
            else
            {
                rhs[i][j][k++] = line[idx];
            }
        }
        rhs[i][j][k] = '\0';
        productionCount[i] = j + 1;
    }
}

int main()
{
    takeGrammarInput();

    cout << "Enter input string: ";
    string str;
    getline(cin, str);
    strcpy(input, str.c_str());
    inputLen = str.length();

    char stack[MAX_STACK] = {lhs[0]};
    if (parse(0, stack, 1))
        cout << "ACCEPTED\n";
    else
        cout << "REJECTED\n";

    return 0;
}