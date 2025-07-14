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
        if(s[i]=='0' || s[i]=='1')
        {
            continue;
        }
        else
        {
            cout<<"Wrong alphabet\n";
            return 0;
        }
    }

    if ((s[0] == '0' && len%2==1) || (s[0] == '1' && len%2==0) )
        printf("accepted\n");
    else
        printf("rejected\n");

    return 0;
}