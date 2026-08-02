#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync with stdio(0), cin.tie(0) ,cout.tie(0)
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    vector<ll>prefix(n+1,0);
    for (auto &i:v)cin>>i;
    for(ll i=0;i<n;i++){
        prefix[i+1]=prefix[i]+v[i];
    }
    ll ans=0;
    map<ll,ll> mp;
    for(ll i=0;i<n+1;i++){
        ans+=mp[prefix[i]-k];
        mp[prefix[i]]++;
    }
    cout<<ans;
}