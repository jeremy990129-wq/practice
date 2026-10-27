#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,x;
    cin>>n>>x;
    vector<int> dp(x+1,INT_MAX/2);
    vector<int> c(n);
    for(auto &i:c)cin>>i;
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(auto a:c){
            if(i-a>=0){
                dp[i]=min(dp[i-a]+1,dp[i]);
            }
        }
    }
    if(dp[x]==INT_MAX/2){
        cout<<-1<<'\n';
        return 0;
    }
    cout<<dp[x]<<'\n';
}