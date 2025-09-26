#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        ll area = 1LL * n * m;

        // Minimum blue cells = ceil(area / 3)
        cout << (area + 2) / 3 << "\n"; 
        // (area+2)/3 is a neat trick to compute ceil division
    }
    return 0;
}
