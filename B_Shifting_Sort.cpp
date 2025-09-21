#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t ;

    while (t--) {
        int n ;cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) 
            cin >> a[i];

        vector<array<int, 3>> ops;
        
        for (int i = 1; i < n; i++) {
            int j = i;
            for (int k = i; k <= n; k++) {
                if (a[k] < a[j]) j = k;
            }
            if (j != i) {
                int d = j - i;
                ops.push_back({i, j, d});
                rotate(a.begin() + i, a.begin() + j, a.begin() + j + 1);
            }
        }

        cout << ops.size() << endl ;
        
        for (auto &op : ops) {
            cout << op[0] << " " << op[1] << " " << op[2] << endl ;
        }
    }

    return 0;
}



