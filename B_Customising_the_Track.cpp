#include<bits/stdc++.h>
using  namespace  std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll sum=0,x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
        ll z=sum%n;
        ll ans=(n-z)*z;
        cout<<ans<<endl;
    }
}

