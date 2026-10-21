#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    fastio;
    int n, m;
    while(cin >> n >> m){
        vector<vector<int>> a(n + 1);
        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            if(u >= 0 && u <= n && v >= 0 && v <= n) {
                a[u].push_back(v);
                a[v].push_back(u);
            }
        }
        
        int s, t;
        cin >> s >> t;
        if(s == t){
            cout << "Yes!!!" << '\n';
            continue; 
        }
        
        queue<int> q;
        vector<bool> visited(n+1, false);
        q.push(s);
        visited[s] = true;
        
        bool found = false;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            
            if(x == t){
                found = true;
                break;
            }
            
            for(int i : a[x]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
        
        if(found){
            cout << "Yes!!!" << '\n';
        } else {
            cout << "No!!!" << '\n';
        }
    }
    return 0;
}
