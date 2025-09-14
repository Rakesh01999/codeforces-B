#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    ll ans = LLONG_MIN;

    int start = max(1, n - 2 * k);
    for (int i = start; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            ll val = 1LL * i * j - 1LL * k * (a[i] | a[j]);
            ans = max(ans, val);
        }
    }
    cout << ans <<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
