#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string s1 = s;
    reverse(s1.begin(), s1.end());
    if (s == s1)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cntZero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cntZero++;
        }

        if (isPalindrome(s))
        {

            if (cntZero == 0)
            {
                cout << "DRAW" << endl;
            }
            else if (cntZero % 2 == 0)
            {
                cout << "BOB" << endl;
            }
            else
            {
                if (cntZero == 1)
                    cout << "BOB" << endl;
                else
                    cout << "ALICE" << endl;
            }
        }
        else
        {
            if (cntZero == 2 && n%2 == 1 && s[n/2] == '0') cout << "DRAW" << endl;
            else cout << "ALICE" << endl;
        }
    }
    return 0;
}
