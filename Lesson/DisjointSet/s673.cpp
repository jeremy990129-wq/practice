#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0) ,cout.tie(0)
class DSU{
    public:
        vector<int> f ,sz;
        DSU(int n){
            f.resize(n+1);
            sz.resize(n+1,1);
            for(int i=0;i<n+1;i++){
                f[i]=i;
            }
        }
        int find(int x){
                if(f[x]==x) return x;
                f[x]=find(f[x]);
                return f[x];
            }
        void unite(int x,int y){
                x=find(x);
                y=find(y);
                if(x==y) return;
                if(sz[y]>sz[x]) swap(x,y);
                sz[x]+=sz[y];
                f[y]=x;
        }
};
int main(){
    fastio;
    int n,q;
    cin>>n>>q;
    DSU dsu(n);

    for(int i=0;i<q;i++){
        int op,u,v;
        cin>>op>>u>>v;
        if(op==1){
            dsu.unite(u,v);

        }else{
            cout<<((dsu.find(u)==dsu.find(v))?"YES":"NO")<<'\n';
        }
    }
}