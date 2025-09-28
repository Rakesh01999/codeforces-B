#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        string n ;cin >> n;
        int len = n.size();

        if ((n[len - 1] - '0') % 2 == 0) {
            cout << 0 << "\n";
        }
        else if ((n[0] - '0') % 2 == 0) {
            cout << 1 << "\n";
        }
        else {
            bool found = false;
            for (char c : n) {
                if ((c - '0') % 2 == 0) {
                    found = true;
                    break;
                }
            }
            if (found) cout << 2 << "\n";
            else cout << -1 << "\n";
        }
    }


    return 0;
}
