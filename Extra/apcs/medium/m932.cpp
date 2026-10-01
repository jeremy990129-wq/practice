#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int m,n,k;
    cin>>m>>n>>k;
    vector<vector<char>> v(m,vector<char>(n));
    for(auto &i:v)for(auto &j:i)cin>>j;
    int xx[6]={-1,0,1,1,0,-1};
    int yy[6]={0,1,1,0,-1,-1};
    map<char,int> mp;
    int x=m-1;
    int y=0;
    int ans=0;
    while(k--){
        int op;
        cin>>op;
        int nx=x+xx[op];
        int ny=y+yy[op];
        if(nx>=0&&nx<m&&ny>=0&&ny<n){
            cout<<v[nx][ny];
            if(mp[v[nx][ny]]==0){
                ans++;
                mp[v[nx][ny]]++;
            }
            x=nx;
            y=ny;
        }else{
            cout<<v[x][y];
            if(mp[v[x][y]]==0){
                ans++;
                mp[v[x][y]]++;
            }
        }

    }
    cout<<'\n';
    cout<<ans<<'\n';
}