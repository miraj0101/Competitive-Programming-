#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin,s);
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
                flag = 2;
            else if (s[i] == 'b')
                flag = 1;
        }
        else if (flag == 2)
        {
            if (s[i] == 'a')
                flag = 3;
            else if (s[i] == 'b')
                flag = 3;
        }
        else if (flag == 3)
        {
            if (s[i] == 'a')
                flag = 2;
            else if (s[i] == 'b')
                flag = 1;
        }
    }
    // Accept or reject
    if (flag == 2)
        cout << "Accerpted" << endl;
    else if (s == "")
        cout << "Rejected";
    else
        cout << "Rejected" << endl;
    return 0;
}