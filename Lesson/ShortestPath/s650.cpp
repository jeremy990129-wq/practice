#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0)
int main(){
    fastio;
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<ll>> dist(n+1,vector<ll>(n+1,-1));
    for(int i=0;i<=n;i++) dist[i][i]=LLONG_MAX;
    while(m--){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        if(u==v)continue;
        dist[u][v]=max(w,dist[u][v]);
        dist[v][u]=max(w,dist[v][u]);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dist[i][k]==-1||dist[k][j]==-1)continue;
                dist[i][j]=max(dist[i][j],min(dist[i][k],dist[k][j]));
            }
        }
    }
    while(q--){
        int s,t;
        cin>>s>>t;
        if(dist[s][t]==-1){
            cout<<-1<<'\n';
        }else{
            cout<<dist[s][t]<<'\n';
        }
    }

}