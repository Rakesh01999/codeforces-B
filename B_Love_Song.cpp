#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<long long> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        int val = (s[i-1] - 'a' + 1); 
        prefix[i] = prefix[i-1] + val;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l-1] <<endl;
    }

    return 0;
}

