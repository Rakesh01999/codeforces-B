
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b ;cin>>a>>b;
        if(a%2==0 && b%2==0)
        {
            cout<<a/2<<" "<<b/2<<endl;
        }
        else if(a%2==1 && b%2==1)
        {
            cout<<a/2<<" "<<b/2 + 1<<endl;
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
 
    }


    return 0;
}
