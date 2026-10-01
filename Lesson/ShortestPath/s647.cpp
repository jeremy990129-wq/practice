#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vector<vector<ll>> a;
    while(m--){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        a.push_back({u,v,w});
    }
    int s,e,k;
    cin>>s>>e>>k;
    if(s==e){
        cout<<0<<'\n';
        return 0;
    }
    vector<ll> dist(n+1,LLONG_MAX);
    dist[s]=0;
    for(int i=0;i<k;i++){
        vector<ll> backup=dist;
        for(auto i:a){
            if(backup[i[0]]!=LLONG_MAX){
                if(dist[i[1]]>backup[i[0]]+i[2]){
                    dist[i[1]]=backup[i[0]]+i[2];
                }
            }
        }
    }
    if(dist[e]==LLONG_MAX){
        cout<<-1<<'\n';
    }else{
        cout<<dist[e]<<'\n';
    }

}