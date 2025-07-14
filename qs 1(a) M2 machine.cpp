#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    int len = s.length();

    // check invalid characters
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'b')
            continue;
        else
        {
            cout << "wrong alphabet";
            return 0;
        }
    }
    // states of machine
    int flag = 1;
    for (int i = 0; i < len; i++)
    {
        if (flag == 1)
        {
            if (s[i] == 'a')
                flag = 1;
            else if (s[i] == 'b')
                flag = 2;
        }
        else if (flag == 2)
        {
            if (s[i] == 'a')
                flag = 3;
            else if (s[i] == 'b')
                flag = 4;
        }
        else if (flag == 3)
        {
            if (s[i] == 'a')
                flag = 2;
            else if (s[i] == 'b')
                flag = 1;
        }
        else if (flag == 4)
        {
            if (s[i] == 'a')
                flag = 3;
            else if (s[i] == 'b')
                flag = 4;
        }
    }
    // Accept or reject
    if (s == "" || flag == 1 || flag == 4)
        cout << "Accerpted" << endl;
    else
        cout << "Rejected" << endl;
    return 0;
}