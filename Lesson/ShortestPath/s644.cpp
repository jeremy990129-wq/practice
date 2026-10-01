#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
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
    vector<ll> dist(n+1,LLONG_MAX);
    dist[1]=0;
    vector<int> t(n+1);
    for(int i=0;i<n-1;i++){
        for(auto i:a){
            if(dist[i[0]]!=LLONG_MAX){
                if(dist[i[1]]>dist[i[0]]+i[2]){
                    dist[i[1]]=dist[i[0]]+i[2];
                    t[i[1]]=i[0];
                }
            }
        }
    }
    if(dist[n]==LLONG_MAX){
        cout<<"INF"<<'\n';
    }else{
        cout<<dist[n]<<'\n';
        vector<int> tt;
        for(int i=n;i!=1;i=t[i]){
            tt.push_back(i);
        }       
        tt.push_back(1);
        reverse(tt.begin(),tt.end());
        for(auto &i:tt)cout<<i<<" ";
    }

}