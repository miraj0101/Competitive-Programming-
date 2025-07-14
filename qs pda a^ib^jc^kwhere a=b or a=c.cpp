#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int len = s.length();

    int counta = 0, countb = 0, countc = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a')
            counta++;
        else if (s[i] == 'b')
            countb++;
        else if (s[i] == 'c')
            countc++;
        else
        {
            cout << "Wrong alphabet" << endl;
            return 0;
        }
    }
    int top = -1, i = 0;
    //char stack[100];
    while (s[i] == 'a')
    {
        //stack[++top] = s[i];
        ++top;
        i++;
    }
    // a==b
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
    // a==c
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

    if (top == -1 )
        cout << "Accepted";
    else
        cout << "Rejected";

    return 0;
}