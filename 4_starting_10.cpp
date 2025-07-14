#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,flag=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='0' && s[i]!='1')
        {
            flag=1;
            break;
        }
    }
    if(flag==0 && s[0]=='1' && s[1]=='0')
    {
        cout<<"Accept"<<endl;
    }
    else
    {
        cout<<"Reject";
    }
    return 0;
    
}
