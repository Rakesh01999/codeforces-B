#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;

        vector<int> twos;
        for (int i = 0; i < n; ++i)
            if (s[i] == '2')
                twos.push_back(i);

        if (twos.size() == 1 || twos.size() == 2) {
            cout << "NO"<<endl ;
            continue;
        }

        cout << "YES"<<endl ;
        vector<string> res(n, string(n, '='));

        for (int i = 0; i < n; ++i)
            res[i][i] = 'X';

        for (int i = 0; i < twos.size(); ++i) {
            int a = twos[i];
            int b = twos[(i + 1) % twos.size()];
            res[a][b] = '+';
            res[b][a] = '-';
        }

        for (int i = 0; i < n; ++i)
            cout << res[i] << endl ;
    }

    return 0;
}
