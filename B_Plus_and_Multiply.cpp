#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        bool ok = false;

        if (a == 1) {
            // Only additions matter
            if ((n - 1) % b == 0) ok = true;
        } else {
            long long cur = 1;
            while (cur <= n) {
                if ((n - cur) % b == 0) {
                    ok = true;
                    break;
                }
                if (cur > n / a) break; // avoid overflow
                cur *= a;
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
