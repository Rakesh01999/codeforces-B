#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        if (n == 1) {
            cout << 1 << '\n';
        } else {
            for (int i = 1; i <= n; ++i) {
                cout << (i + 1) << (i == n ? '\n' : ' ');
            }
        }
    }

    
    return 0;
}
