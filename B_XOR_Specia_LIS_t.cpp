#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int ar[n+4];
        for(int i=0;i<n;i++)
            cin>>ar[i];

        bool flag=false;
        
        if(n%2==0)
            cout<<"YES"<<endl;
        else
        {
            for(int i=1;i<n;i++)
            {
                if(ar[i]<=ar[i-1])
                {
                    flag=true;
                    break;
                }
            }
            if(flag)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}

