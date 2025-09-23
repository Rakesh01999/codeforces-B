#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
using ll = long long;

ll modpow(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll ans = 0;
        ll power = 1;  // n^0 initially
        while (k > 0) {
            if (k & 1) ans = (ans + power) % MOD;
            power = (power * n) % MOD;
            k >>= 1;
        }
        cout << ans % MOD << "\n";
    }
    return 0;
}
