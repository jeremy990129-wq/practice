#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    vector<ll> a(n);
    for(auto &i:a)cin>>i;
    vector<ll> dp(n+1,0);
    dp[1]=a[0];
    for(int i=2;i<=n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+a[i-1]);   
    } 
    cout<<dp[n]<<'\n';
}