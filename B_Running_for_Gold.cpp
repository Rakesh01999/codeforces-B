#include <iostream>
#include <vector>
using namespace std;

bool isSuperior(const vector<int>& a, const vector<int>& b) {
    int count = 0;
    for (int i = 0; i < 5; ++i)
        if (a[i] < b[i])
            count++;
    return count >= 3;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> athlete(n, vector<int>(5));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < 5; ++j)
                cin >> athlete[i][j];

        int candidate = 0;
        for (int i = 1; i < n; ++i)
            if (isSuperior(athlete[i], athlete[candidate]))
                candidate = i;

        bool valid = true;
        for (int i = 0; i < n; ++i) {
            if (i == candidate) continue;
            if (!isSuperior(athlete[candidate], athlete[i])) {
                valid = false;
                break;
            }
        }

        
        if(valid)
            cout << candidate + 1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
