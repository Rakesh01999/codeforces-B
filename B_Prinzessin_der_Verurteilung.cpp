#include <bits/stdc++.h>
using namespace std;

string str;
void num_to_str(int num)
{
    if (num)
    {
        num_to_str((num - 1) / 26);
        str += ('a' + (num - 1) % 26);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        int i = 1;
        while (1)
        {
            str = "";
            num_to_str(i);
            int pos = s.find(str);
            if (pos == -1)
            {
                ans = str;
                break;
            }
            i++;
        }
        cout << ans << endl;
    }
}
