#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0;

    cin>>s;
    

    if (s.length() < 2) {
        flag = 1;
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'a' && s[i] != 'b') {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
