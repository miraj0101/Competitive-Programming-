#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int flag = 0;

    // Check for invalid characters
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'a' && s[i] != 'b') {
            flag = 1; // Invalid character
            break;
        }
    }

    // Accept if length is odd (not divisible by 2)
    if (flag == 0 && s.length() % 2 != 0)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
