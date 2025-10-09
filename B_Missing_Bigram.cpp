
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<string> grams(n - 2);
        for (int i = 0; i < n - 2; i++) 
            cin >> grams[i];

        string result = "";
        result += grams[0][0];
        
        bool fixed = false;
        for (int i = 0; i < n - 3; i++) {
            result += grams[i][1];
            if (grams[i][1] != grams[i + 1][0]) {
                result += grams[i + 1][0];
                fixed = true;
            }
        }
        result += grams.back()[1];

        if ((int)result.size() < n) 
            result += 'a';

        cout << result << "\n";
    }

    return 0;
}
