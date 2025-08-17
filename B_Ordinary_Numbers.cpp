#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        string s = to_string(n);
        int len = s.size();          // number of digits
        int first_digit = s[0] - '0';

        // (len - 1) * 9 covers all ordinary numbers with fewer digits
        int ans = (len - 1) * 9;

        // Build the number "ddd...d" with same length as n
        long long candidate = 0;
        for (int i = 0; i < len; i++) candidate = candidate * 10 + first_digit;

        // If candidate <= n, we can count it; else only first_digit-1
        if (candidate <= n) ans += first_digit;
        else ans += (first_digit - 1);

        cout << ans << "\n";
    }

    return 0;
}
