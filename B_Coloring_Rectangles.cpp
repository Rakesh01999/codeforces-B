#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        ll x=a*b;
        if(x%3==0)
            cout<<x/3<<endl;
        else
            cout<<x/3 + 1<<endl;
 
    }

    return 0;
}

