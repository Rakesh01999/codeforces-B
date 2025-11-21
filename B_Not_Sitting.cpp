#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, m;cin >> n >> m;
        
        int total = n * m;

        vector<int> dist;

        dist.reserve(total);

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int d1 = abs(i - 1) + abs(j - 1);
                int d2 = abs(i - 1) + abs(j - m);
                int d3 = abs(i - n) + abs(j - 1);
                int d4 = abs(i - n) + abs(j - m);
                int mx = max({d1, d2, d3, d4});
                dist.push_back(mx);
            }
        }

        sort(dist.begin(), dist.end());

        for (int i = 0; i < total; i++)
            cout << dist[i] << " ";
        cout << "\n";
    }

    return 0;
}
