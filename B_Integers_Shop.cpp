
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll INF = 1e18;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        int n;cin>>n;
        int l,r,c;
        cin>>l>>r>>c;cout<<c<<endl;
        priority_queue<int>mn,mx,eq;
 
        int mnv=l;
        int mxv=r;
        eq.push(-c);
        n--;
        mn.push(-c);
        mx.push(-c);
        while(n--){
        cin>>l>>r>>c;
        if(l==mnv && r==mxv){
               eq.push(-c);
               mn.push(-c);
               mx.push(-c);
           }
        if(l<mnv){
               mnv=l;
               while(!eq.empty())
               {
                   eq.pop();
               }
               while(!mn.empty())
               {
                   mn.pop();
               }
               mn.push(-c);
           }
           if(l==mnv)
           {
               mn.push(-c);
           }
           if(r>mxv)
           {
               mxv=r;
               while(!eq.empty())
               {
                   eq.pop();
               }
               while(!mx.empty())
               {
                   mx.pop();
               }
               mx.push(-c);
           }
           if(r==mxv)
           {
               mx.push(-c);
           }
           if(mxv==r && mnv==l)
           {
               eq.push(-c);
           }
           if(!eq.empty())
           {
               int x=-eq.top();
               int y=-mn.top();
               int z=-mx.top();
               cout<<min(x,y+z)<<endl;
           }
           else
           {
                int y=-mn.top();
                int z=-mx.top();
                cout<<y+z<<endl;
           }
 
        }
    }

    return 0;
}
 