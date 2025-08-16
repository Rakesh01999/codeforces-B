#include<bits/stdc++.h>
using  namespace  std;
#define ll long long

int main()
{
    map<ll,ll>mp;
    ll ans=4;
    mp[2]=1;
    mp[4]=1;
    ll i=1;
    while(ans<=1e9)
    {
        ll an=i+i+1;
        an*=4;
        ans+=an;
        mp[ans]=1;
        i++;
    }
    ans=2;
    i=1;
    while(ans<=1e9)
    {
        ll an=i+i+1;
        an*=2;
        ans+=an;
        mp[ans]=1;
        i++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(mp[n]==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
