#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int result = (n - 1) + (m - 1) * n;
        if (result != k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
