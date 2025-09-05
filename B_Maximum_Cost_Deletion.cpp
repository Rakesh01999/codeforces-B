#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;

        int blocks = 1; 
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) blocks++;
        }

        long long ans = 1LL * a * n;
        if (b >= 0) {
            ans += 1LL * b * n;
        } else {
            ans += 1LL * b * (blocks / 2 + 1); 
        }
        cout << ans << "\n";
    }
    return 0;
}
