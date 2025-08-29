#include<bits/stdc++.h>
using  namespace  std;
#define ll long long 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,a,b;cin>>n>>a>>b;
        if(n==1 || b==1 || n%b==1)
            cout<<"Yes"<<endl;
        else if(a==1)
        {
            if(n%b==1)
                cout<<"Yes"<<endl;
            else 
                cout<<"No"<<endl;
        }
        else{
            int ans=0, i=0;
            ll x=a;
            while(pow(a,i)<=n)
            {
                ll z=n - pow(a,i);
                if(z%b==0)
                {
                    ans=1;
                    break;
                }
                i++;
            }
            if(ans==1)
                cout<<"Yes"<<endl;
            else 
                cout<<"No"<<endl;
        }
    }
}

