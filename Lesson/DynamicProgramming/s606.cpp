#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vector<int> c(n);
    for(auto &i:c)cin>>i;
    vector<ll> dp(m+1,LLONG_MAX/2);
    dp[0]=0;
    for(int i=0;i<=m;i++){
        for(auto &a:c){
            if(i-a>=0){
                dp[i]=min(dp[i],dp[i-a]+1);
            }
        }
    }
    if(dp[m]==LLONG_MAX/2){
        cout<<-1<<'\n';
        return 0;
    }
    cout<<dp[m]<<'\n';

}