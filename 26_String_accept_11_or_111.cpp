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

    // Check for exact match: "11" or "111"
    if (flag == 0 && (s == "11" || s == "111"))
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
