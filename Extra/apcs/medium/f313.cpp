#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int r,c,k,m;
    cin>>r>>c>>k>>m;
    vector<vector<int>> v(r,vector<int>(c));
    for(auto &i:v)for(auto &j:i)cin>>j;
    int xx[4]={0,1,0,-1};
    int yy[4]={1,0,-1,0};
    while(m--){
        vector<vector<int>> nxt(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(v[i][j]==-1)continue;
                for(int a=0;a<4;a++){
                    int nx=i+xx[a];
                    int ny=j+yy[a];
                    if(0>nx||nx>=r||0>ny||ny>=c)continue;
                    if(v[nx][ny]==-1)continue;
                    nxt[i][j]-=v[i][j]/k;
                    nxt[nx][ny]+=v[i][j]/k;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                v[i][j]+=nxt[i][j];
            }
        }
    }
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(v[i][j]!=-1){
                mx=max(mx,v[i][j]);
                mn=min(mn,v[i][j]);
            }
        }
    }
    cout<<mn<<'\n'<<mx<<'\n';
} 