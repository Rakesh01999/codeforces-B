#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t ; cin>>t;
    while(t--){
        int n,a,b ; cin>>n>>a>>b;
        int dif=abs(a-b);
        if(dif>1 || (a+b)>n-2)
            cout<<-1<<endl;
        else{
            if(a>b){
                int x=n-a;
                for(int i=n;i>n-a;i--)
                {
                    cout<<x<<" "<<i<<" ";
                    x--;
                }
                for(int i=x;i>=1;i--)
                    cout<<i<<" ";
                cout<<endl;
            }
            else if(b>a)
            {
                int x=b+1;
                for(int i=1;i<=b;i++){
                    cout<<x<<" "<<i<<" ";
                    x++;
                }
                for(int i=x;i<=n;i++)
                    cout<<i<<" ";
                cout<<endl;
            }
            else{
                int x=a+2;
                cout<<a+1<<" ";
                for(int i=1;i<=a;i++){
                    cout<<x<<" "<<i<<" ";
                    x++;
                }
                for(int i=x;i<=n;i++)
                    cout<<i<<" ";

                cout<<endl;
            }
        }
 
    }

    return 0 ;
}
