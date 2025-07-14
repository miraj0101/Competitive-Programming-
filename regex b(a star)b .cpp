#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int counta , countb , len = s.length();

    // Check for invalid characters
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a')
         counta++;
        else if(s[i]=='b')
         countb++;
        else
        {
            cout<<"Wrong alphabet\n";
            return 0;
        }
    }

    // Must start and end with 'b'
    if (s[0] != 'b' || s[len - 1] != 'b')
    {
        printf("rejected\n");
        return 0;
    }

    // All characters between first and last must be 'a' (if any)
    for (int i = 1; i < len - 1; i++)
    {
        if (s[i] != 'a')
        {
            printf("rejected\n");
            return 0;
        }
    }

    printf("accepted\n");
    return 0;
}