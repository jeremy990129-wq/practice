#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int>prefix(s.size(),0);
    for(int i=0;i<n;i++){
        if(s[i]=='A'||s[i]=='T'){
            prefix[i+1]=prefix[i]+0;
        }else{
            prefix[i+1]=prefix[i]+1;
        }    
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        ll ans=prefix[r]-prefix[l-1];
        cout<<ans<<'\n';
    }
}