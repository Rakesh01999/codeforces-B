// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n+1);
//         for (int i = 1; i <= n; i++) cin >> a[i];

//         vector<array<int, 3>> ops; // store operations (l, r, d)

//         for (int i = 1; i < n; i++) {
//             // find index of minimum from i..n
//             int j = i;
//             for (int k = i; k <= n; k++) {
//                 if (a[k] < a[j]) j = k;
//             }
//             if (j != i) {
//                 // rotate left segment [i..j] by (j-i)
//                 int d = j - i;
//                 ops.push_back({i, j, d});
//                 rotate(a.begin() + i, a.begin() + j, a.begin() + j + 1);
//             }
//         }

//         cout << ops.size() << endl ;
//         for (auto &op : ops) {
//             cout << op[0] << " " << op[1] << " " << op[2] << endl ;
//         }
//     }

    
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t ; cin>>t;
    while(t--)
    {
        int n;cin>>n ;
        vector<pair<int,int> >v;
        int ar[n];
        vector<int>x;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            x.push_back(ar[i]);
        }
        sort(ar,ar+n);
        for(int i=n-1;i>0;i--)
        {
            int idx ;
            for(int j=0;j<x.size();j++)
            {
                if(ar[i]==x[j])
                {
                    idx =j;
                    break;
                }
            }
            if(i==idx )
            {
                x.pop_back();
                continue;
            }
            else
            {
                v.push_back({idx +1,i+1});
                vector<int>z;
                for(int j=0;j<x.size();j++)
                {
                    if(j==idx )continue;
                    z.push_back(x[j]);
                }
                x=z;
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<" "<<1<<endl;
        }
    }

    return 0;
}