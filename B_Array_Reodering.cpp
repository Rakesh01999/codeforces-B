#include<bits/stdc++.h>
using  namespace  std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n;
        vector<int>v,v1;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2==0)v.push_back(x);
            else v1.push_back(x);
        }
        int ans=0, z=1;
        for(int i=0;i<v.size();i++)
        {
            ans+=n-z;
            z++;
        }
        int ans1=0;
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            for(int j=i+1;j<v1.size();j++)
            {
                if(__gcd(v1[i],v1[j])>1)ans1++;
            }
        }
        cout<<ans+ans1<<endl;
    }
    return 0;
}
