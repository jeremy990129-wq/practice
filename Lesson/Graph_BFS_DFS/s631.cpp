#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int xx[4]={0,-1,0,1};
    int yy[4]={1,0,-1,0};
    int r,c;
    cin>>r>>c;
    vector<vector<char>> v(r,vector<char>(c));
    vector<vector<int>> used(r,vector<int>(c,0));
    queue<pair<int,int>> q;
    for(auto &i:v)for(auto &j:i)cin>>j;
    int a=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(((i==0||j==0||i==r-1||j==c-1)&&v[i][j]=='.')||v[i][j]=='#'){
                if(!used[i][j]){
                    q.push({i,j});
                    used[i][j]=1;
                    a++;
                }
            }
            while(!q.empty()){
                auto [x,y]=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int nx=x+xx[i];
                    int ny=y+yy[i];
                    if(nx>=0&&nx<r&&ny>=0&&ny<c&&v[x][y]==v[nx][ny]&&!used[nx][ny]){
                        q.push({nx,ny});
                        used[nx][ny]=1;
                        a++;
                    }
                }
            }
        }
    }
    cout<<r*c-a<<'\n';

}