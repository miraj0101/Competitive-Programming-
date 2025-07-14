#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int count0=0, len = s.length();
    
    // Check for valid characters
    for(int i=0;i<len;i++)
    {
        if(s[i]=='0')
        {
            count0++;
            continue;
        }
        else if(s[i]=='1')
        {
            continue;
        }
        else
        {
            cout<<"Wrong alphabet\n";
            return 0;
        }
    }

    if (count0>=3 )
        printf("accepted\n");
    else
        printf("rejected\n");

    return 0;
}