// xCx^r
#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        string s;
        cout << "Enter a string: ";
        cin >> s;

        char stack[100];
        int top = -1;
        int len = s.length();
        int i, count = 0;
        for (i = 0; i < len; i++)
        {
            if (s[i] == 'a' || s[i] == 'b' || s[i] == 'C')
                continue;
            else
            {
                count = 1;
                break;
            }
        }

        for (i = 0; i < len / 2; i++)
        {
            stack[++top] = s[i];
        }
        i++;
        while (i < len && s[i] == s[top])
        {
            top--;
            i++;
        }
        if (count == 1)
            cout << "You put wrong alphabets" << endl;
        else if (top == -1 && s[len / 2] == 'C')
            cout << "Accepted" << endl;
        else
            cout << "Rejected" << endl;
    }
    return 0;
}