#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        // Create sorted copy
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
        
        // Map value -> index in sorted array
        unordered_map<int,int> pos;
        for (int i = 0; i < n; i++) pos[sorted_a[i]] = i;
        
        // Count segments
        int segments = 1;
        for (int i = 1; i < n; i++) {
            if (pos[a[i]] != pos[a[i-1]] + 1) {
                segments++;
            }
        }
        
        if (segments <= k) cout << "Yes"<<endl ;
        else cout << "No" <<endl ;
    }
    return 0;
}
