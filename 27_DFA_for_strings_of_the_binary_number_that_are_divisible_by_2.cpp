#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0;

    cin >> s;

    // Check for invalid characters
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '0' && s[i] != '1') {
            flag = 1;
            break;
        }
    }

    // Check if last digit is 0
    if (flag == 0 && s[s.length() - 1] == '0')
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
