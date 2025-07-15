// ques 3(a)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        string s;
        cout << "Enter the string : ";
        getline(cin, s);
        int i, count = 0;
        int len = s.length();
        for (i = 0; i < len; i++)
        {
            if (s[i] == '0' || s[i] == '1')
                continue;
            else
            {
                count = 1;
                break;
            }
        }
        int flag = 0;
        for (i = 0; i < len; i++)
        {
            if (flag == 0)
            {
                if (s[i] == '0')
                    flag = 0;
                else if (s[i] == '1')
                    flag = 4;
            }
            else if (flag == 1)
            {
                if (s[i] == '0')
                    flag = 0;
                else if (s[i] == '1')
                    flag = 4;
            }
            else if (flag == 2)
            {
                if (s[i] == '0')
                    flag = 1;
                else if (s[i] == '1')
                    flag = 5;
            }
            else if (flag == 3)
            {
                if (s[i] == '0')
                    flag = 1;
                else if (s[i] == '1')
                    flag = 5;
            }
            else if (flag == 4)
            {
                if (s[i] == '0')
                    flag = 2;
                else if (s[i] == '1')
                    flag = 6;
            }
            else if (flag == 5)
            {
                if (s[i] == '0')
                    flag = 2;
                else if (s[i] == '1')
                    flag = 6;
            }
            else if (flag == 6)
            {
                if (s[i] == '0')
                    flag = 3;
                else if (s[i] == '1')
                    flag = 7;
            }
            else if (flag == 7)
            {
                if (s[i] == '0')
                    flag = 3;
                else if (s[i] == '1')
                    flag = 7;
            }
        }
        if (count == 1)
            cout << "You put wrong alphabets." << endl;
        else if (flag == 1 || flag == 3 || flag == 5 || flag == 7)
            cout << "Accepted" << endl;
        else
            cout << "Rejected" << endl;
    }
    return 0;
}