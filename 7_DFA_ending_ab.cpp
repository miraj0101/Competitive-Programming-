#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int i,flag=0,found=0;
  cin>>s;
  for(i=0;i<s.length();i++)
  {
    if(s[i]!='a'&&s[i]!='b')
    {
      flag=1;
      break;
    }
  }
  if(s[s.length()-1=='b'] && s[s.length()-2]=='a')
  {
      found=1;
  }
  if(flag==0 && found==1)
  {
    cout<<"Accept"<<endl;
  }
  else
  {
      cout<<"Reject"<<endl;
  }
  return 0;
}