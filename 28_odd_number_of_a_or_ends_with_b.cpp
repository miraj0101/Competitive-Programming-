#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int countA = 0;
    int flag = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            countA++;
        }
        if (s[i] != 'a' && s[i] != 'b') {
            flag = 1; // Invalid character
            break;
        }
    }

    // Check conditions
    if (flag == 0 && (countA % 2 == 1 || s[s.length() - 1] == 'b'))
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
