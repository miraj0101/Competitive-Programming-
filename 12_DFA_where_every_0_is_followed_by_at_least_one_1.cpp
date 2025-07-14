#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0;

    getline(cin, s); // allows accepting empty input

    for (int i = 0; i < s.length(); i++) {
        // check for invalid characters
        if (s[i] != '0' && s[i] != '1') {
            flag = 1;
            break;
        }

        
        if (s[i] == '0') {
            if (s[i + 1] != '1') {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
