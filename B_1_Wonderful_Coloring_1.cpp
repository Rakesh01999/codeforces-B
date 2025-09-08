#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--)
    {
        string s;cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        int fRcnt = 0, freq = 0;
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                freq += it.second;
                fRcnt++;
            }
        }

        int nonFreq = s.size() - freq;
        int ans = (fRcnt) + (nonFreq / 2);
        
        cout << ans << endl;
    }
    return 0;
}
