#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<char>> v(r,vector<char>(c));
    vector<vector<int>> dist(r,vector<int>(c,-1));
    for(auto &i:v)for(auto &j:i)cin>>j;
    int xx[4]={0,-1,0,1};
    int yy[4]={1,0,-1,0};
    queue<pair<int,int>> q;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(v[i][j]=='2'){
                q.push({i,j});
                dist[i][j]=0;
            }
        }
    }
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+xx[i];
            int ny=y+yy[i];
            if(nx>=0&&nx<r&&ny>=0&&ny<c&&v[nx][ny]=='1'&&dist[nx][ny]==-1){
                q.push({nx,ny});
                dist[nx][ny]=dist[x][y]+1;
            }
        }
    }
    int maxx=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(v[i][j]=='1'){
                if(dist[i][j]==-1){
                    cout<<-1<<'\n';
                    return 0;
                }
                maxx=max(maxx,dist[i][j]);
            }
        }
    }
    cout<<maxx<<'\n';
}       