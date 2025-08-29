#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n+1), pos(2*n+2, -1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i; 
        }

        long long ans = 0;

        for (int i = 1; i <= n; i++) {
            for (long long mul = a[i]; mul <= 2*n; mul += a[i]) {
                int j = mul - i; 
                if (j > i && j <= n && pos[mul / a[i]] == j) {
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
