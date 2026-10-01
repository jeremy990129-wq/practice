#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int>(n));
    for(auto &i:v)for(auto &j:i)cin>>j;
    vector<pair<int,int>> ans;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x=v[i][j];
            int sum=0;
            for(int a=0;a<m;a++){
                for(int b=0;b<n;b++){
                    if(abs(i-a)+abs(j-b)<=x){
                        sum+=v[a][b];
                    }
                }
            }
            if(sum%10==x){
                ans.push_back({i,j});
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(auto [x,y]:ans){
        cout<<x<<" "<<y<<'\n';
    }
}
