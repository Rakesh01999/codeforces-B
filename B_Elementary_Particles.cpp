#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=-1;
        map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.count(a[i])){
                ans=max(ans,m[a[i]]+n-i);
            }
            m[a[i]]=i;
        }
        cout<<ans<<endl;
    }

    return 0;
}
