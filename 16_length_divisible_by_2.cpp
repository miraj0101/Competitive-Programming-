#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag = 0;

    getline(cin, s);//null count kore

    if (s.length() % 2 != 0) {
        flag = 1;
    }


    for (int i = 0; i < (int)s.length(); i++) {
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