#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    ll n,q;
    cin>>n>>q;
    while(q--)pq.push(0);

    while(n--){
        ll a,t;
        cin>>a>>t;

        ll b=pq.top();
        pq.pop();
        ll ans=max(a,b)+t;
        cout<<ans<<'\n';
        pq.push(ans);
    }
}