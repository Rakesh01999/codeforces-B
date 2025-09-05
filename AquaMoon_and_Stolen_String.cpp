#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m;cin >> n >> m;
        vector<string> original(n), remaining(n - 1);

        for (int i = 0; i < n; i++) 
            cin >> original[i];
        for (int i = 0; i < n - 1; i++) 
            cin >> remaining[i];

        string stolen(m, ' ');

        for (int col = 0; col < m; col++) {
            map<char, int> freq;
            for (int i = 0; i < n; i++)
                freq[original[i][col]]++;
            for (int i = 0; i < n - 1; i++) 
                freq[remaining[i][col]]--;
            for (auto it = freq.begin(); it != freq.end(); ++it) {
                if (it->second > 0) {
                    stolen[col] = it->first;
                    break;
                }
            }
        }
        cout << stolen << "\n";
    }
    return 0;
}
