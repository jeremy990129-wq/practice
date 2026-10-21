#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<ll>> v(n+1,vector<ll>(n+1,LLONG_MAX));
    while(m--){
        int u,vv;
        ll w;
        cin>>u>>vv>>w;
        v[u][vv]=min(w,v[u][vv]);
    }
    for(int i=1;i<n+1;i++){
       v[i][i]=0;
    
    }

    for(int k=1;k<n+1;k++){
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(v[i][k]==LLONG_MAX || v[k][j]==LLONG_MAX )continue;
                v[i][j]=min(v[i][k]+v[k][j],v[i][j]);
            }
        }
    }
    while(q--){
        int s,t;
        cin>>s>>t;
        if(v[s][t]==LLONG_MAX){
            cout<<-1<<'\n';
            continue;
        }
        cout<<v[s][t]<<'\n';
    }
}
