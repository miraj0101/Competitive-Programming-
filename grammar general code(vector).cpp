#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

struct Rule
{
    char lhs;
    vector<string> rhs;
};

vector<Rule> grammar;
string input;
int inputLen;

bool isTerminal(char c)
{
    return islower(c) || isdigit(c);
}

bool parse(int pos, stack<char> stk)
{
    if (stk.empty() && pos == inputLen)
        return true;
    if (stk.empty() || pos > inputLen)
        return false;

    char top = stk.top();
    stk.pop();

    if (isTerminal(top))
    {
        if (pos < inputLen && input[pos] == top)
            return parse(pos + 1, stk);
        else
            return false;
    }

    for (const Rule &rule : grammar)
    {
        if (rule.lhs != top)
            continue;

        for (const string &prod : rule.rhs)
        {
            stack<char> newStk = stk;
            if (prod != "e")
            {
                for (int k = prod.size() - 1; k >= 0; k--)
                    newStk.push(prod[k]);
            }

            if (parse(pos, newStk))
                return true;
        }
    }
    return false;
}

void takeGrammarInput()
{
    int ruleCount;
    cout << "Enter number of production rules: ";
    cin >> ruleCount;
    cin.ignore();

    for (int i = 0; i < ruleCount; ++i)
    {
        string line;
        getline(cin, line);

        Rule r;
        r.lhs = line[0];

        size_t arrowPos = line.find("->");
        string prods = line.substr(arrowPos + 2);

        size_t start = 0, end;
        while ((end = prods.find('|', start)) != string::npos)
        {
            r.rhs.push_back(prods.substr(start, end - start));
            start = end + 1;
        }
        r.rhs.push_back(prods.substr(start));

        grammar.push_back(r);
    }
}

int main()
{
    takeGrammarInput();

    cout << "Enter input string: ";
    getline(cin, input);
    inputLen = input.length();

    stack<char> stk;
    stk.push(grammar[0].lhs);

    if (parse(0, stk))
        cout << "ACCEPTED\n";
    else
        cout << "REJECTED\n";

    return 0;
}
