// a^ib^jc^k where a=b or a=c
#include <bits/stdc++.h>
using namespace std;

int main()
{

    while (1)
    {
        char stack[100];
        string s;
        cout << "Enter the string : ";
        cin >> s;

        int i, top = -1;
        int len = s.length();
        int count = 0, counta = 0, countb = 0, countc = 0;
        for (i = 0; i < len; i++)
        {
            if (s[i] == 'a')
                counta++;
            else if (s[i] == 'b')
                countb++;
            else if (s[i] == 'c')
                countc++;
            else
                count = 1;
        }

        i = 0;
        top = -1;

        while (s[i] == 'a')
        {
            stack[++top] = 'a';
            i++;
        }

        //(a==b)
        if (counta == countb)
        {
            while (i < len && s[i] == 'b')
            {
                top--;
                i++;
            }
            while (s[i] == 'c')
                i++;
        }
        //(a==c)
        else if (counta == countc)
        {
            while (s[i] == 'b')
                i++;
            while (i < len && s[i] == 'c')
            {
                top--;
                i++;
            }
        }
        if (count == 1)
            cout << "You put wrong Alphabets" << endl;
        else if (top == -1)
            cout << "Accepted" << endl;
        else
            cout << "Rejected" << endl;
    }
    return 0;
}