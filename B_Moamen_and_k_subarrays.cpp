#include <bits/stdc++.h>
using namespace std;

 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
 
        map<int,int>mp;
        int ar[n+3];
 
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mp[ar[i]]=i;
        }
 
        sort(ar,ar+n);
 
        int segment=1;
        int ind=mp[ar[0]];
        for(int i=1;i<n;i++){
            int z=mp[ar[i]];
            if(z!=ind+1)
                segment++;
            ind=z;
        }

        if(segment<=k)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }


    return 0;
}
 