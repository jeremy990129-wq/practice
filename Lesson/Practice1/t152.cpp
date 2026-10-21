#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m;
    cin>>n>>m;
    int xx[8]={0,-1,-1,-1,0,1,1,1};
    int yy[8]={1,1,0,-1,-1,-1,0,1};
    vector<vector<int>> a(n,vector<int>(m));
    vector<pair<int,int>> ans;
    for(auto &i:a)for(auto &j:i)cin>>j;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            bool b=true;
            for(int k=0;k<8;k++){
                if(xx[k]+i<0||xx[k]+i>=n||yy[k]+j<0||yy[k]+j>=m)continue;
                if(a[xx[k]+i][yy[k]+j]>=a[i][j]){
                    b=false;
                }
            }
            if(b){
                ans.push_back({i+1,j+1});
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(auto [x,y]:ans)cout<<x<<" "<<y<<'\n';
}