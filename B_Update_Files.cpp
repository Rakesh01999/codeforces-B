#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t ; cin>>t;
    while(t--)
    {
        ll n,k ;cin>>n>>k;
        ll x=1;
        ll cnt=0;
        while(x<k){
            cnt++;
            x*=2;
        }
        if(x>=n)
            cout<<cnt<<endl;
        else{
            ll y=n-x;
            if(y%k==0)
                cnt+=y/k;
            else
                cnt+=y/k + 1;

            cout<<cnt<<endl;
        }
    }

    return 0 ;
}
