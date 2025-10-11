
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        set<ll>s;
        ll i=1;
        while(i*i<=n){
            s.insert(i*i);
            i++;
        }
        i=1;
        while(i*i*i<=n){
            s.insert(i*i*i);
            i++;
        }
        cout<<s.size()<<endl;
    }

    return 0;
}
