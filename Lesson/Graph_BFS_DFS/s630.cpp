#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int xx[4]={1,0,-1,0};
    int yy[4]={0,-1,0,1};
    int R,C;
    cin>>R>>C;
    vector<vector<char>> v(R,vector<char>(C));
    for(auto &i:v)for(auto &j:i)cin>>j;
    int r,c;
    char k;
    cin>>r>>c>>k;
    r--;c--;
    queue<pair<int,int>> q;
    char color=v[r][c];
    if(color==k){
        for(auto &i:v){
            for(auto &j:i){
                cout<<j;
            }
        cout<<'\n';
        }
        return 0;

    }
    v[r][c]=k;
    q.push({r,c});
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+xx[i];
            int ny=y+yy[i];
            if(0<=nx && nx<R && 0<=ny && ny<C && v[nx][ny]==color){
                q.push({nx,ny});
                v[nx][ny]=k;
            }
        }
    }
    for(auto &i:v){
        for(auto &j:i){
            cout<<j;
        }
        cout<<'\n';
    }

}