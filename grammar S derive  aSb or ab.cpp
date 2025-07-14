#include <bits\stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int counta = 0, countb = 0, len = s.length();

    // check for invalid characters
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a')
            counta++;
        else if (i>=len/2 && s[i] == 'b')
            countb++;
        else
        {
            cout << "Rejected";
            return 0;
        }
    }
    if (counta == countb && counta > 0)
        printf("Accepted\n");
    else
        printf("Rejected\n");
    return 0;
}