#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    ll n,k,q;
    cin>>n>>k>>q;
    vector<int> dist(n+1,INT_MAX);
    vector<bool> b(n+1,false);
    dist[1]=0;
    while(k--){
        int bb;
        cin>>bb;
        b[bb]=true;
    }
    deque<pair<int,int>> dq;
    dq.push_back({0,1});
    while(!dq.empty()){
        auto[w,a]=dq.front();
        dq.pop_front();
        if(w>dist[a])continue;
        
        if(a-1>0&&!b[a-1]){
            if(dist[a-1]>w+1){
                dist[a-1]=w+1;
                dq.push_back({w+1,a-1});
            }
        }
        if(a+1<=n&&!b[a+1]){
            if(dist[a+1]>w+1){
                dist[a+1]=w+1;
                dq.push_back({w+1,a+1});
            }
        }
        if(a*2<=n&&!b[a*2]){
            if(dist[a*2]>w){
                dist[a*2]=w;
                dq.push_front({w,a*2});
            }
        }
    }
    while(q--){
        ll op;
        cin>>op;
        if(dist[op]==INT_MAX){
            cout<<-1<<'\n';
        }else{
            cout<<dist[op]<<'\n';
        }

    }


}