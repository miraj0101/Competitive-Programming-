#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#define MAX_RULES 10
#define MAX_PRODUCTIONS 10
#define MAX_RHS 10
#define MAX_INPUT 100

char lhs[MAX_RULES];
char rhs[MAX_RULES][MAX_PRODUCTIONS][MAX_RHS];
int productionCount[MAX_RULES];
int ruleCount;

char input[MAX_INPUT];
int inputLen;

bool isTerminal(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

bool parse(int pos, const char stack[])
{
    if (stack[0] == '\0' && pos == inputLen)
        return true;
    if (stack[0] == '\0' || pos > inputLen)
        return false;

    char topChar = stack[0];
    const char *restStack = stack + 1;

    if (isTerminal(topChar))
    {
        if (input[pos] == topChar)
        {
            return parse(pos + 1, restStack);
        }
        return false;
    }

    for (int i = 0; i < ruleCount; i++)
    {
        if (lhs[i] == topChar)
        {
            for (int j = 0; j < productionCount[i]; j++)
            {
                char newStack[MAX_INPUT];

                if (strcmp(rhs[i][j], "e") == 0)
                {
                    strcpy(newStack, restStack); // ε: skip topChar
                }
                else
                {
                    // Push RHS as-is (no reverse)
                    strcpy(newStack, rhs[i][j]);
                    strcat(newStack, restStack);
                }

                if (parse(pos, newStack))
                    return true;
            }
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

        int prodIndex = 0, charIndex = 0;
        bool arrowFound = false;
        for (size_t j = 0; j < line.size(); j++)
        {
            if (!arrowFound && line[j] == '-' && j + 1 < line.size() && line[j + 1] == '>')
            {
                arrowFound = true;
                j++;
                continue;
            }
            if (!arrowFound)
                continue;

            if (line[j] == '|')
            {
                rhs[i][prodIndex][charIndex] = '\0';
                prodIndex++;
                charIndex = 0;
            }
            else
            {
                rhs[i][prodIndex][charIndex++] = line[j];
            }
        }
        rhs[i][prodIndex][charIndex] = '\0';
        productionCount[i] = prodIndex + 1;
    }
}

int main()
{
    takeGrammarInput();

    cout << "Enter input string: ";
    string inputStr;
    getline(cin, inputStr);
    strcpy(input, inputStr.c_str());
    inputLen = inputStr.length();

    char stack[MAX_INPUT];
    stack[0] = lhs[0];
    stack[1] = '\0';

    if (parse(0, stack))
        cout << "ACCEPTED" << endl;
    else
        cout << "REJECTED" << endl;

    return 0;
}
