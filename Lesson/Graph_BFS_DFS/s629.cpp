#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int r,c;
    cin>>r>>c;
    stack<pair<int,int>> st;
    vector<vector<char>> v(r,vector<char>(c));
    vector<vector<int>> used(r,vector<int>(c,0));
    for(auto &i:v)for(auto &j:i)cin>>j;
    int xx[4]={0,-1,0,1};
    int yy[4]={1,0,-1,0};
    int ans=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(!used[i][j]&&v[i][j]=='1'){
                st.push({i,j});
                ans++;
                used[i][j]=1;
            }
            while(!st.empty()){
                auto [x,y]=st.top();
                used[x][y]=1;
                st.pop();
                for(int i=0;i<4;i++){
                    int nx=x+xx[i];
                    int ny=y+yy[i];
                    if(ny>=0&&ny<c&&nx>=0&&nx<r&&v[nx][ny]=='1'&&!used[nx][ny]){
                        used[nx][ny] = 1;
                        st.push({nx,ny});
                    }
                }
            }
        }
    }
    cout<<ans<<'\n';
}