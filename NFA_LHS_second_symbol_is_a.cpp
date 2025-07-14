#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0;

    cin >> s;

    // Check for invalid characters
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'a' && s[i] != 'b') {
            flag = 1;
            break;
        }
    }

    // Check if string has at least 2 characters and 2nd is 'a'
    if (flag == 0 && s.length() >= 2 && s[1] == 'a')
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
