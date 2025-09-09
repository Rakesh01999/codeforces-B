#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < n; i++) {
            pos[a[i]].push_back(i);
        }

        vector<int> usable; 
        for (auto &p : pos) {
            int limit = min((int)p.second.size(), k);
            for (int i = 0; i < limit; i++) {
                usable.push_back(p.second[i]);
            }
        }

        int M = usable.size();
        
        int usableSize = M - (M % k);

        vector<int> ans(n, 0);
        
        for (int i = 0; i < usableSize; i++) {
            ans[usable[i]] = (i % k) + 1;
        }

        for (int i = 0; i < n; i++) 
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}

