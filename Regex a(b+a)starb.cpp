#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int len = s.length();

    // Check for invalid characters
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'b')
            continue;
        else 
        {
            cout<<"Wrong alphabet\n";
            return 0;
        }
    }
    // Minimum length must be 2 (at least 'ab')
    /*if (len < 2)
    {
        printf("rejected\n");
        return 0;
    }*/
    // Check start with 'a' and end with 'b'
    if (s[0] == 'a' && s[len - 1] == 'b')
    {
        cout<<"accepted\n";
    }
    else
    {
        cout<<"rejected\n";
    }

    return 0;
}