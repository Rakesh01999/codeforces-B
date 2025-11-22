#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s;cin >> s;

        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        string single, first, second;

        for (int i = 0; i < 26; i++) {
            if (freq[i] == 1) {
                single.push_back('a' + i);
            } else if (freq[i] == 2) {
                first.push_back('a' + i);
                second.push_back('a' + i);
            }
        }

        cout << single + first + second << "\n";
    }
    return 0;
}
