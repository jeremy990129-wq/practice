#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,w;
    cin>>n>>w;
    vector<ll> dp(w+1,0);
    while(n--){
        int ww,v;
        cin>>ww>>v;
        if(ww>w)continue;
        for(int i=w;i>=ww;i--){
            dp[i]=max(dp[i],dp[i-ww]+v);
        }

    }
    cout<<dp[w]<<'\n';
}