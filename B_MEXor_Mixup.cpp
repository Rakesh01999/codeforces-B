#include <bits/stdc++.h>
using namespace std;

// XOR from 0 to n in O(1)
int xor_upto(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int X = xor_upto(a - 1);  // XOR of [0 .. a-1]

        if (X == b) {
            cout << a << "\n";
        } else if ((X ^ b) != a) {
            cout << a + 1 << "\n";
        } else {
            cout << a + 2 << "\n";
        }
    }
    
    return 0;
}
