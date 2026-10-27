#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define MOD 1000000007
int main(){
    fastio;
    int n,x;
    cin>>n>>x;
    vector<int> dp(x+1,0);
    vector<int> c(n);
    for(auto &i:c)cin>>i;
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(auto &j:c){
            if(i-j>=0){
                dp[i]=(dp[i]+dp[i-j])%MOD;
            }
        }
    }
    cout<<dp[x]<<'\n';
}