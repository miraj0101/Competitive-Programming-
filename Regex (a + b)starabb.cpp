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

    if (s[len - 1] == 'b' && s[len - 2] == 'b' && s[len - 3] == 'a')
    {
        printf("accepted\n");
    }
    else
    {
        printf("rejected\n");
    }
    return 0;
}