#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

vector<vector<int>> turn(vector<vector<int>> &v){
    int r=v.size();
    int c=v[0].size();
    vector<vector<int>> vv(c,vector<int>(r));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            vv[j][r-i-1]=v[i][j];
        }
    }
    return vv;
}

int main(){
    fastio;
    int r,c;
    cin>>r>>c;
    vector<vector<int>> v1(r,vector<int>(c));
    for(auto &i:v1)for(auto &j:i) cin>>j;
    vector<vector<int>> v2(r,vector<int>(c));
    for(auto &i:v2)for(auto &j:i) cin>>j;
    int ans=0;
    for(int a=0;a<3;a++){
        if(v1.size()==v2.size()&&v1[0].size()==v2[0].size()){
            int s=0;
            for(int i=0;i<v1.size();i++){
                for(int j=0;j<v1[0].size();j++){
                    if(v1[i][j]==v2[i][j]){
                        s++;
                    }
                }
            }
            ans=max((s*100)/(r*c),ans);
        }
        v2=turn(v2);
    }
    cout<<ans<<'%'<<'\n';
}

