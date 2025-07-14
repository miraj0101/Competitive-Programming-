//S->aSb or ab
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    int i = 0, countA = 0, countB = 0;

    cout << "Enter a string: ";
    cin >> s;

    int len = strlen(s);

    while (s[i] == 'a') // count leading a's
    {
        countA++;
        i++;
    }

    while (s[i] == 'b') // count trailing b's
    {
        countB++;
        i++;
    }

    if (i == len && countA == countB && countA > 0)
    {
        cout << "Accepted" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }

    return 0;
}
