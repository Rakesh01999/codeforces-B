#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;cin >> n;
    vector<ll> a(n);
    ll sum = 0, maxVal = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        maxVal = max(maxVal, a[i]);
    }

    long double result = (long double)maxVal + (long double)(sum - maxVal) / (n - 1);

    cout << fixed << setprecision(9) << result << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--)
        solve();

    return 0;
}
