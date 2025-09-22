#include<bits/stdc++.h>
using namespace std;

int main(){
   int t; cin>>t;
   while(t--){
        int n,x ;cin>>n>>x;
        int arr[n+5],barr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            barr[i]=arr[i];
        }
        sort(arr,arr+n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=barr[i] && i<x && (n-i)<=x)
            {
                ans=1;
                break;
            }
        }
        if(ans==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}