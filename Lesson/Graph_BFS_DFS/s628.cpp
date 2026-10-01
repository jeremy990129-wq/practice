#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n+1);
    vector<char> visited(n+1,0);
    while(m--){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(auto &i:g){
        sort(i.begin(),i.end(),greater<int>());
    }

    stack<int> st;
    st.push(1);
    while(!st.empty()){
        int x=st.top();
        st.pop();
        if(visited[x])continue;
        visited[x]=1;
        cout<<x<<" ";
        for(int i:g[x]){
           st.push(i);
            
        }
    }
}