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
        bool flag = false;
        for (int i = 0; i * 111 <= n; i++)
        {
            if ((n - 111 * i) % 11 == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
