#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();

        int idx = -1;

        for (int i = n - 2; i >= 0; i--) {
            int sum = (s[i] - '0') + (s[i+1] - '0');
            if (sum >= 10) {
                idx = i;
                break;
            }
        }

        if (idx != -1) {
            int sum = (s[idx] - '0') + (s[idx+1] - '0');
            string res = s.substr(0, idx) + to_string(sum) + s.substr(idx + 2);
            cout << res << "\n";
        }
        else {
            int sum = (s[0] - '0') + (s[1] - '0');
            string res = to_string(sum) + s.substr(2);
            cout << res << "\n";
        }
    }

    return 0;
}
