#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        int arr[n];
        bool dies = false;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int tall = 1;
        if (arr[0] == 1)
            tall++;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == 0 && arr[i] == arr[i - 1])
            {
                dies = true;
                break;
            }
            if (arr[i] == 1 && arr[i] != arr[i - 1])
            {
                tall++;
            }
            if (arr[i] == 1 && arr[i] == arr[i - 1])
            {
                tall = tall + 5;
            }
        }

        if (dies)
            cout << -1 << endl;
        else
            cout << tall << endl;
    }
    
    return 0;
}
