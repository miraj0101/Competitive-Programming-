#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,flag=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='a' && s[i]!='b')
        {
            flag=1;
            break;
        }
    }
    if(flag==0 && s[0]=='a' && s[1]=='a' && s[2]=='b')
    {
        cout<<"Accept"<<endl;
    }
    else
    {
        cout<<"Reject";
    }
    return 0;
    
}
