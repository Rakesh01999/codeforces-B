#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        int ar[n + 4];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        vector<pair<int, pair<int, int>>> v;
        for (int i = 1; i <= n; i += 2)
        {
            int a = i;
            int b = i + 1;
            if (ar[i] != ar[i + 1])
            {
                v.push_back({1, {a, b}});
                v.push_back({2, {a, b}});
                v.push_back({1, {a, b}});
                v.push_back({1, {a, b}});
                v.push_back({2, {a, b}});
                v.push_back({1, {a, b}});
            }
            else
            {
                v.push_back({2, {a, b}});
                v.push_back({2, {a, b}});
                v.push_back({1, {a, b}});
                v.push_back({1, {a, b}});
            }
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
        }
    }
    
    return 0;
}
