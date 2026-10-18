#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> v(k,vector<int>(4));
    for(auto &i:v)for(auto &j:i)cin>>j;
    vector<vector<bool>> a(n,vector<bool>(m,false));
    while(v.size()!=0){
        for(int i=0;i<v.size();i++){
            a[v[i][0]][v[i][1]]=true;
            v[i][0]+=v[i][2];
            v[i][1]+=v[i][3];
        }
        vector<int> d;
        vector<pair<int,int>> ds;
        for(int i=0;i<v.size();i++){
            if(0>v[i][0]||v[i][0]>=n||0>v[i][1]||v[i][1]>=m){
                d.push_back(i);
            }else if(a[v[i][0]][v[i][1]]){
                d.push_back(i);
                ds.push_back({v[i][0],v[i][1]});
            }
        }
        reverse(d.begin(),d.end());
        for(auto &i:d)v.erase(v.begin()+i);
        for(auto &[x,y]:ds)a[x][y]=false;
        
    }
    int ans=0;
    for(auto &i:a){
        for(auto j:i){
            if(j){
                ans++;
            }
        }
    }
    cout<<ans<<'\n';
}