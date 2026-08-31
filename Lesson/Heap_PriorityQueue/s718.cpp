#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(), [](auto &a,auto &b){
        if(a.first==b.first) return a.second>b.second;
        return a.first<b.first;
    });
    priority_queue<ll,vector<ll>,greater<ll>> pq; 
    for(int i=0;i<n;i++){
        if(v[i].first>pq.size()) pq.push(v[i].second);
        else if(!pq.empty() && pq.size()==v[i].first){
            if(pq.top()<v[i].second){
                pq.pop();
                pq.push(v[i].second);
            }
        }
    }
    ll ans=0;
    while(!pq.empty()){
        ans+=pq.top();
        pq.pop();
    } 
    cout<<ans<<'\n';
}