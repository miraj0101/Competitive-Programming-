//a^nb^n
#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        char stack[100];
        string s;
        cout<<"Enter the string : ";
        cin>>s;

        int len=s.length();
        int i,top=-1,count=0;

        for(i=0;i<len;i++)
        {
            if(s[i]=='a' || s[i]=='b')
                continue;
            else
                count=1;
        }
        i=0;
        while(i<len && s[i]=='a')
        {
            stack[++top]=s[i];
            i++;
        }

        while(i<len && s[i]=='b')
        {
            top--;
            i++;
        }
        if(count==1)
            {
                cout << "You put wrong alphabets" << endl;
                break;
            }
        if(top==-1 && len==i)
            cout<<"Accepted"<<endl;
        else
            cout<<"Rejected"<<endl;
    }
    return 0;
}