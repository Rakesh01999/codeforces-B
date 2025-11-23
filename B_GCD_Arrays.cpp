#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        ll l, r, k;cin >> l >> r >> k;

        if (l == r) {
            if (l == 1) cout << "NO\n"; 
            else cout << "YES\n";
            continue;
        }

        ll count_odd = (r + 1) / 2 - (l / 2);

        if (k >= count_odd) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    
    return 0;
}
