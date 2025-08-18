#include <bits/stdc++.h>
using namespace std;

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

        if(cntZero == 0){
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
    return 0;
}