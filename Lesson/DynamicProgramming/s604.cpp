#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define MOD 1000000007
int main(){
    int n;
    cin>>n; 
    vector<ll> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=(dp[i-1]%MOD+dp[i-2]%MOD)%MOD;
    }
    cout<<dp[n]<<'\n';
}