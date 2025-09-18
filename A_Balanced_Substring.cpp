#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin >> t;
    while (t--) {
        int n ;string s;
        cin >> n >> s;

        bool found = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                cout << i + 1 << " " << i + 2 <<endl ; 
                found = true;
                break;
            }
        }

        if(!found)
            cout << -1 << " " << -1 << endl ;
    }

    return 0;
}
