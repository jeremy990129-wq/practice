#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vector<vector<pair<ll,int>>> a(n+1);
    while(m--){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        a[u].push_back({w,v});
        a[v].push_back({w,u});
    }
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    vector<ll> dist(n+1,LLONG_MAX);
    dist[1]=0;
    pq.push({0,1});
    vector<int> t(n+1);
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(dist[u]<d)continue;
        for(auto [w,v]:a[u]){
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                t[v]=u;
                pq.push({dist[v],v});
            }
        }
    }
    if(dist[n]==LLONG_MAX){
        cout<<-1<<'\n';
    }else{
        cout<<dist[n]<<'\n';
        vector<int> tt;
        for(int i=n;i!=1;i=t[i]){
            tt.push_back(i);
        }
        reverse(tt.begin(),tt.end());
        cout<<1<<" ";
        for(auto i:tt){
            cout<<i<<" ";
        }
        cout<<'\n';
    }
}