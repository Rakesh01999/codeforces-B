#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    
    double W, H;
    cin >> W >> H;

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double w, h;
    cin >> w >> h;

    double table_w = x2 - x1;
    double table_h = y2 - y1;

    double ans = 1e18; 
    
    if (table_w + w > W && table_h + h > H) {
        cout << -1 << endl;
        return;
    }

    if (table_w + w <= W) {
        if (w <= x1) ans = 0;
        else ans = min(ans, w - x1);

        if (w <= W - x2) ans = 0;
        else ans = min(ans, w - (W - x2));
    }

    if (table_h + h <= H) {
        if (h <= y1)
            ans = 0;
        else
            ans = min(ans, h - y1);

        if (h <= H - y2)
            ans = 0;
        else
            ans = min(ans, h - (H - y2));
    }

    cout << fixed << setprecision(9) << ans << "\n";
}

int main() {
    int t;cin >> t;
    while (t--)
        solve();
    return 0;
}
