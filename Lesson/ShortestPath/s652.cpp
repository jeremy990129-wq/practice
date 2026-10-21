#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<ll>> a(n+1,vector<ll>(n+1,LLONG_MAX));
    for(int i=0;i<n+1;i++) a[i][i]=0;
    vector<vector<int>> nxt(n+1,vector<int>(n+1,0));
    while(m--){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        if(w<a[u][v]){
            a[u][v]=w;
            nxt[u][v]=v;
        }
       
    }

    for(int k=1;k<n+1;k++){
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(a[i][k]==LLONG_MAX || a[k][j]==LLONG_MAX )continue;
                if(a[i][j]>a[i][k]+a[k][j]){
                    a[i][j]=a[i][k]+a[k][j];
                    nxt[i][j]=nxt[i][k];
                }
            }
        }
    }
    while(q--){
        int s,t;
        cin>>s>>t;
        if(a[s][t]==LLONG_MAX){
            cout<<-1<<'\n';
            continue;
        }
        if(s==t){
            cout<<0<<'\n'<<s<<'\n';
            continue;
        }
        cout<<a[s][t]<<'\n';
        cout<<s;
        while(s!=t){
            s=nxt[s][t];
            cout<<" "<<s;
        }
        cout<<'\n';
    }
} 