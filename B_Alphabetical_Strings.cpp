#include <bits/stdc++.h>
using namespace std;

bool isAlphabetical(string s) {
    int n = s.size();
    int pos = s.find('a');  // position of 'a'
    if (pos == string::npos) return false;

    int l = pos, r = pos;
    char nextChar = 'b';

    // expand until we've placed all n letters
    while (nextChar < 'a' + n) {
        if (l > 0 && s[l - 1] == nextChar) {
            l--;
        } else if (r + 1 < n && s[r + 1] == nextChar) {
            r++;
        } else {
            return false;
        }
        nextChar++;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (isAlphabetical(s) ? "YES" : "NO") << "\n";
    }
    return 0;
}
