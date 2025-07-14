#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0; 
    getline(cin, s);  

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'b') {
            flag = 1;
            break;
        }

        if (s[i] == 'a') {
            if ( s[i + 1] != 'b') {
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
