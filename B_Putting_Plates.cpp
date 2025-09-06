#include<bits/stdc++.h>
using  namespace  std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)
    {
        int h,w;cin>>h>>w;
        int ar[h+3][w+3];
        memset(ar, 0, sizeof(ar));
       for(int i=0;i<w;i+=2)
            ar[0][i]=1;
                
       for(int j=2;j<h;j+=2){
           ar[j][0]=1;
           ar[j][w-1]=1;
       }

       for(int i=2;i<w-2;i+=2)
            ar[h-1][i]=1;

       for(int i=0;i<h;i++){
           for(int j=0;j<w;j++)
                cout<<ar[i][j];
           cout<<endl;
       }

    }
    return 0;

}

