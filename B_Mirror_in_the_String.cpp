#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        string ans;
        if(s[0]=='a'){
            cout<<"aa"<<endl;
            continue;
        }
        if(s[0]==s[1]){
            cout<<s[0]<<s[1]<<endl;
            continue;
        }
        ans+=s[0];
        int i;
        for(i=1;i<s.size();i++){
            if(s[i]<=s[i-1])
                ans+=s[i];
            else
                break;
        }
 
        string ans2;
        for(int i=ans.size()-1;i>=0;i--)
            ans2+=s[i];
        cout<<ans<<ans2<<endl;
    }

return 0;
}

 