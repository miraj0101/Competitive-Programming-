#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i;
    int flag = 0; 
    int found = 0; 

    cin >> s;

    for(i = 0; i < s.length(); i++) {
        if(s[i] != 'a' && s[i] != 'b') {
            flag = 1;
            break;
        }
    }

    for(i = 0; i < s.length() - 1; i++) {
        if(s[i] == 'a' && s[i+1] == 'b') {
            found = 1;
            break;
        }
    }

    if(flag == 0 && found == 1)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
