#include<bits/stdc++.h>
using  namespace  std;

string ss;
void num_to_str(int num)
{
    if(num)
    {
        num_to_str((num-1)/26);
        ss+=('a'+ (num-1)%26);
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        string ans;
        int i=1;
        while(1)
        {
            ss="";
            num_to_str(i);
            int pos=s.find(ss);
            if(pos==-1)
            {
                ans=ss;
                break;
            }
            i++;
        }
       cout<<ans<<endl;
    }
}
