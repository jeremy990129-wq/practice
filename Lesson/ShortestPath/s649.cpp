#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
ll Dijkstra(int s,int e,int n,vector<vector<pair<ll,int>>> &list){
    vector<ll> dist(n+1,LLONG_MAX);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    dist[s]=0;
    pq.push({0,s});
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dist[u]) continue;
        for(auto [w,v]:list[u]){
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});

            }
        }
    }
    return dist[e];
}
int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vector<vector<pair<ll,int>>> list(n+1);
    while(m--){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        list[u].push_back({w,v});
        list[v].push_back({w,u});
    }
    int s,e,a,b;
    cin>>s>>e>>a>>b;
    ll dista=Dijkstra(s,a,n,list);
    ll distb=Dijkstra(s,b,n,list);
    ll distae=Dijkstra(a,e,n,list);
    ll distbe=Dijkstra(b,e,n,list);
    ll path_a = LLONG_MAX;
    ll path_b = LLONG_MAX;
    if(dista != LLONG_MAX && distae != LLONG_MAX){
        path_a = dista + distae;
    }
    if(distb != LLONG_MAX && distbe != LLONG_MAX){
        path_b = distb + distbe;
    }
    ll ans = min(path_a, path_b);

    if(ans == LLONG_MAX) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
}