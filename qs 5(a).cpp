#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'b')
            continue;
        else
        {
            cout << "Wrong alphabet" << endl;
            return 0;
        }
    }
    int top = -1, i = 0;
    char stack[100];
    while (i < len && s[i] == 'a')
    {
        stack[++top] = s[i];
        i++;
    }
    while (i < len && s[i] == 'b')
    {
        top--;
        i++;
    }
    if (top == -1 && i == len)
        cout << "Accepted";
    else
        cout << "Rejected";
    return 0;
}