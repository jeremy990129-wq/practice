#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> q(n,vector<int>(m));
    for(auto &i:q)for(auto &j:i)cin>>j;
    int ans=INT_MAX;
    while(k--){
        vector<int> c(n);
        for(auto &i:c)cin>>i;
        vector<vector<int>> t(m, vector<int>(m, 0));
        for(int i=0;i<n;i++){
            int u=c[i];
            for(int j=0;j<m;j++){
                t[u][j]+=q[i][j];
            }
        }
        int to=0;
        for(int u=0;u<m;++u) {
            for(int v=0;v<m;++v) {
                int vv=t[u][v];
                if(u==v){
                    to+=vv;
                }else if(vv<=1000){
                    to+=vv*3;
                }else{
                    to+=(3000+(vv-1000)*2);
                }
            }
        }
        ans=min(ans,to);
    }
    cout<<ans<<'\n';
}
