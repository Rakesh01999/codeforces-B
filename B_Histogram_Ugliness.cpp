#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n+2, 0); 
        
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        long long outline = a[1] + a[n];
        for (int i = 1; i < n; i++)
            outline += abs(a[i] - a[i+1]);

        long long excess = 0;
        for (int i = 1; i <= n; i++) {
            excess += max(0LL, a[i] - max(a[i-1], a[i+1]));
        }

        cout << outline - excess << endl;
    }
    return 0;
}
