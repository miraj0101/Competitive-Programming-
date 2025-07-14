#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,flag;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='a' && s[i+1]=='b')
        {
            flag=0;
        }
       else if(s[i]!='a' && s[i]!='b')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Accept"<<endl;
    }
    else
    {
        cout<<"Reject";
    }
    return 0;
    
}
