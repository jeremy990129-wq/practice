#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m;
    while(cin>>n>>m){
        vector<vector<int>> v(n+2,vector<int>(n+2));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int a;
                cin>>a;
                v[i][j]=v[i][j-1]-v[i-1][j-1]+v[i-1][j]+a;
            }
        }
        while(m--){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            if(x1>x2)swap(x1,x2);
            if(y1>y2)swap(y1,y2);
            cout<<v[x2][y2]-v[x2][y1-1]-v[x1-1][y2]+v[x1-1][y1-1]<<'\n';
        }
    }



}