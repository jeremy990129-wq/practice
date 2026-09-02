#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n;
    cin>>n;
    vector<ll> v(n);
    for(auto &i:v)cin>>i;
    vector<ll> prefix(n+1,0);
    vector<ll> diff(n+1,0);
    for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+v[i];
        diff[i+1]=diff[i]+v[n-i-1];
    }
    map<ll,ll> mp;
    for(int i=1;i<=n;i++) mp[diff[i]]++;
    int ans=0;
    for(int i=1;i<=n;i++) ans+=mp[prefix[i]];
    cout<<ans<<'\n';
}