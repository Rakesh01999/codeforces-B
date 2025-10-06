#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ar[n+3];
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mx=max(ar[i],mx);
        }
        int ans=0;
        int z=ar[n-1];
        if(z==mx)
            cout<<0<<endl;
        else
        {
            for(int i=n-2;i>=0;i--)
            {
                if(ar[i]>z)
                {
                    ans++;
                    z=ar[i];
                }
                if(z==mx)
                    break;
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
