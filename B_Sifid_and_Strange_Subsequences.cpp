#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--)
    {
        int n;
        cin >> n;

        int ara[n];
        int maxx = INT_MAX, ans = 1;

        for (int i = 0; i < n; i++)
            cin >> ara[i];
        sort(ara, ara + n);

        for (int i = 1; i < n; i++)
        {

            maxx = min(maxx, abs(ara[i] - ara[i - 1]));
            if (maxx < ara[i])
            {
                break;
            }
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
