
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll x = (a - 1) + (b - 1) * a;
        if (x != c)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
