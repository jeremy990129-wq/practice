#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m,s,t;
    cin>>n>>m>>s>>t;
    vector<vector<int>> a(n+1);
    while(m--){
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    vector<int> dist(n+1,-1);
    queue<int> q;
    q.push(s);
    dist[s]=0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(auto &i:a[x]){
           if(dist[i]==-1){
                q.push(i);
                dist[i]=dist[x]+1;
           } 
        }
    }
    cout<<dist[t]<<'\n';
}