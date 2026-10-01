#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<pair<ll,int>>> a(n+1);
    while(m--){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        a[u].push_back({w,v});
    }
    while(q--){
        int s,t;
        cin>>s>>t;
        priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
        vector<ll> dist(n+1,LLONG_MAX);
        dist[s]=0;
        pq.push({dist[s],s});
        while(!pq.empty()){
            auto [d,u] =pq.top();
            pq.pop();
            if(dist[u]<d)continue;
            for(auto [w,v]:a[u]){
                if(dist[v]>w+dist[u]){
                    dist[v]=w+dist[u];
                    pq.push({dist[v],v});
                }
            }
        }
        if(dist[t]==LLONG_MAX){
            cout<<-1<<'\n';
        }else{
            cout<<dist[t]<<'\n';
        }
    }
 

}
