#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int k,q,r;
    cin>>k>>q>>r;
    vector<char> v(k);
    for(auto &i:v)cin>>i;
    vector<vector<char>> ans(r);
    for(int i=0;i<q;i++){
        vector<char> nv(k);
        for(int j=0;j<k;j++){
            int a;
            cin>>a;
            nv[a-1]=v[j];
        }
        
        for(int j=0;j<r;j++){
            ans[j].push_back(nv[j]);
        }
        v=nv;
    }
    for(auto &i:ans){
        for(auto &j:i){
            cout<<j;
        }
        cout<<'\n';
    }
}