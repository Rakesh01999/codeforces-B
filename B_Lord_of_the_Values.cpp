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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<array<int,3>> ops; // {type, i, j}

        // Process in pairs
        for (int i = 1; i <= n; i += 2) {
            int j = i + 1;
            // Apply 6-step fixed sequence
            ops.push_back({2, i, j});
            ops.push_back({1, i, j});
            ops.push_back({2, i, j});
            ops.push_back({1, i, j});
            ops.push_back({2, i, j});
            ops.push_back({1, i, j});
        }

        cout << ops.size() << "\n";
        for (auto &op : ops) {
            cout << op[0] << " " << op[1] << " " << op[2] << "\n";
        }
    }
}
