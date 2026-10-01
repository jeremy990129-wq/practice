#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n+1);
    vector<int> t(n+1,0);
    while(m--){
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    queue<int> q;
    bool b=true;
    for(int i=1;i<=n;i++){
        if(t[i]==0){
            q.push(i);
            t[i]=1;
        }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(auto j:a[x]){
                if(t[j]==0){
                    t[j]=-t[x];
                    q.push(j);
                }else if(t[j]==t[x]){
                    b=false;
                }
                if(!b)break;
            }
            if(!b)break;
        }
        if(!b)break;
    }
    if(b){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }
}
