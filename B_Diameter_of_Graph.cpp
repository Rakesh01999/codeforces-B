#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        ll n, m, k; 
        cin >> n >> m >> k;

        // Check connectivity requirement
        if (m < (n - 1)) {
            cout << "NO\n";
            continue;
        }

        // Check maximum edge bound
        if (m > (n * (n - 1)) / 2) {
            cout << "NO\n";
            continue;
        }

        if (k <= 1) {
            cout << "NO\n";
        }
        else if (k == 2) {
            // Only possible when n=1 (diameter=0)
            if (n == 1) cout << "YES\n";
            else cout << "NO\n";
        }
        else if (k == 3) {
            // Only possible if graph is complete (diameter=1)
            if (m == (n * (n - 1)) / 2) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            // k >= 4, always possible if connected
            cout << "YES\n";
        }
    }

    return 0;
}
