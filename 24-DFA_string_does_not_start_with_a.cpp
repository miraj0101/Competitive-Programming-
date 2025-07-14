#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0;

    getline(cin,s);

    // Check for invalid characters
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'a' && s[i] != 'b') {
            flag = 1; // invalid character
            break;
        }
    }

    // Check if it starts with 'a'
    if (flag == 0 && s[0] == 'a') {
        flag = 1; // starts with 'a' → reject
    }

    if (flag == 0)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
