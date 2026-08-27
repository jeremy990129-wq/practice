#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    vector<ll> v(n);
    for(auto &i:v) cin>>i;
    priority_queue<ll,vector<ll>,greater<ll>> pq(v.begin(),v.end());

    ll sum=0;
    while(pq.size()>=2){
        ll a=0;
        a+=pq.top();
        pq.pop();
        a+=pq.top();
        pq.pop();
        pq.push(a);
        sum+=a;
    }

    cout<<sum;
}