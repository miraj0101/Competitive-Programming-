#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    int flag=0;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]!='a'&& s[i]!='b'){
            flag=1;
            break;
        }
    }
    if(s[0]=='a'&&flag==0)
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    return 0;
}
