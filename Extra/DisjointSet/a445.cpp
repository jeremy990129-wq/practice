#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
class DSU{
    public:
        vector<int> f,sz;
        DSU(int n){
            f.resize(n+1);
            sz.resize(n+1,1);
            for(int i;i<n;i++)f[i]=i;
        }
        int find(int x){
            if(f[x]==x) return x;
            f[x]=find(f[x]);
            return f[x];
        }
        void unite(int x,int y){
            x=find(x);
            y=find(y);
            if(x==y)return;
            if(sz[y]>sz[x])swap(x,y);
            sz[x]+=sz[y];
            f[y]=x;
        }

};
int main(){
    fastio;
    int n,m,q;
    cin>>n>>m>>q;
    DSU dsu(n+1);
    int x,y;
    while(m--){
        cin>>x>>y;
        dsu.unite(x,y);   
    } 
    while(q--){
        cin>>x>>y;
        cout<<(dsu.find(x)==dsu.find(y)? ":)":":(")<<'\n';
    }
}