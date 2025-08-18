#include<bits/stdc++.h>
using  namespace  std;

int main()
{
    int x,y;
    x=1999999973;
    y=1999999943;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+3];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        cout<<n-1<<endl;
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0)
            {
                cout<<i+1<<" "<<i+2<<" "<<x<<" "<<min(ar[i],ar[i+1])<<endl;
                ar[i+1]=min(ar[i],ar[i+1]);
            }
            else{
                cout<<i+1<<" "<<i+2<<" "<<y<<" "<<min(ar[i],ar[i+1])<<endl;
                ar[i+1]=min(ar[i],ar[i+1]);
            }
        }
    }
    return 0;
}
