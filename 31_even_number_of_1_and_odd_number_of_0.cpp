#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count0 = 0, count1 = 0;
    int flag = 0;

    cin >> s;

    // Count 0s and 1s, and check for invalid characters
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            count0++;
        }
        else if (s[i] == '1') {
            count1++;
        }
        else {
            flag = 1; // invalid character
            break;
        }
    }

    // Accept if even number of 1s or odd number of 0s
    if (flag == 0 && (count1 % 2 == 0 && count0 % 2 == 1))
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
