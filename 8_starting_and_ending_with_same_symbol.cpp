#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i;
    int flag = 0;   
    int found = 0;  

   
    getline(cin, s); //to detect empty string
    for(i = 0; i < s.length(); i++) {
        if(s[i] != 'a' && s[i] != 'b') {
            flag = 1;
            break;
        }
    }

    //accept empty string also
    if(flag == 0 && ( s[0] == s[s.length() - 1])) {
        found = 1;
    }

    if(flag == 0 && found == 1)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
