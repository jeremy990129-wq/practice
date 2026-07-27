#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int r,c,q;
    cin>>r>>c>>q;
    vector<vector<ll>>v(r, vector<ll>(c));
    for (auto &i:v){
        for (auto &j:i){
            cin>>j;
        }
    }
    vector<vector<ll>>vv(r+1, vector<ll>(c+1,0));
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            vv[i][j]=v[i-1][j-1]+vv[i-1][j]+vv[i][j-1]-vv[i-1][j-1];

        }

    }
    while(q--){
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        cout<<vv[r2][c2]-vv[r2][c1-1]-vv[r1-1][c2]+vv[r1-1][c1-1]<<'\n';
    }
}