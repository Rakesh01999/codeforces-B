#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ar[n+3];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        if(ar[0]!=n && ar[n-1]!=n)
            cout<<-1<<endl;
        else{
            int x = (n+1)/2;
            reverse(ar,ar+x);
            for(int i=0;i<x;i++)
                cout<<ar[i]<<" ";
            for(int i=n-1;i>=x;i--)
                cout<<ar[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}
 
