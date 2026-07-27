#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int r,c,q;
    cin>>r>>c>>q;
    vector<vector<ll>>v(r+2, vector<ll>(c+2,0));
    while(q--){
        int r1,c1,r2,c2,x;
        cin>>r1>>c1>>r2>>c2>>x;
        v[r1][c1]+=x;
        v[r1][c2+1]-=x;
        v[r2+1][c1]-=x;
        v[r2+1][c2+1]+=x;
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            v[i][j]=v[i][j]+v[i-1][j]+v[i][j-1]-v[i-1][j-1];

        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<v[i][j]<<" ";
            
        }
        cout<<'\n';
    }
}