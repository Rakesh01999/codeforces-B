#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int ar[12]={3,5,7,11,13,17,19,23,29,31,37,41};
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n & 1){
            n--;
            int a,b,c;
            c=1;
            int x,y;
            for(int i=0;i<12;i++){
                x=ar[i];
                y=n-x;
                if(__gcd(x,y)==c)
                {
                    a=x;
                    b=y;
                    break;
                }
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<2<<' '<<n-3<<' '<<1<<endl;
        }
    }

    return 0;
}
 
