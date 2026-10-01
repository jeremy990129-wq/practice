#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios:: sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m; 
    cin>>n>>m;
    vector<vector<ll>> edges;
    while(m--){
        ll u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    vector<ll> dist(n+1,LLONG_MAX);
    dist[1] = 0;
    for(int i=0;i<n-1;i++){
        for(auto edge: edges) {
            if(dist[edge[0]]!=LLONG_MAX){
                dist[edge[1]]=min(dist[edge[1]],dist[edge[0]]+edge[2]);
            }
        }
    }

    vector<char> used(n+1,0);
    queue<int> q;
    for(auto edge: edges){
        if(dist[edge[0]]!=LLONG_MAX){
            if(dist[edge[1]]>dist[edge[0]]+edge[2]){
                used[edge[1]]=1;
                q.push(edge[1]);
            }
        }
    }
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(auto &i:edges){
            if(i[0]==x && !used[i[1]]){
                used[i[1]]=1;
                q.push(i[1]);
            }
        }

    }
    if(used[n]==1){
        cout<<"-INF"<<'\n';

    }else if(dist[n]==LLONG_MAX){
        cout<<"INF"<<'\n';
    }else{
        cout<<dist[n]<<'\n';
    }
}