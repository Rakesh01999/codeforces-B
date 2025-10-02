
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n ; cin>>n;
        int ar[n+3];
        for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar,ar+n);
        int x=n/2 ;
        for(int i=1;i<=x;i++){
            cout<<ar[i]<<" "<<ar[0]<<endl;
        }
    }

    return 0;
}

