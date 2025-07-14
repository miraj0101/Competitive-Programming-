#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int len = s.length();

    // Check for valid characters
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a' || s[i]=='b' ||s[i]=='c')
        {
            continue;
        }
        else
        {
            cout<<"Wrong alphabet\n";
            return 0;
        }
    }

    if ((s[0] == 'a' || s[0] == 'b') && s[1] == 'c')
        printf("accepted\n");
    else
        printf("rejected\n");

    return 0;
}