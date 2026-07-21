#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    ll n,q;
    int l,r;
    cin>>n>>q;
    vector<ll> v(n);
    for (auto &i:v) cin>>i;
    vector<ll> prefix(n+1);
    prefix[0]=0;
    for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+v[i];
    }
    while(q--){
        cin>>l>>r;
        ll ans=prefix[r]-prefix[l-1];
        cout<<ans<<'\n';
    }
}