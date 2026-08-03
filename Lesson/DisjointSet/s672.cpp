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
    int n,m;
    cin>>n>>m;
    DSU dsu(n);
    vector<pair<int,pair<int,int>>> e(m);
    for(auto &i:e) cin>>i.second.first>>i.second.second>>i.first; 
    sort(e.begin(),e.end());

    int t=0;
    for(int i=0;i<m;i++){
        if(dsu.find(e[i].second.first)==dsu.find(e[i].second.second)){
            continue;
        }
        t=e[i].first;
        dsu.unite(e[i].second.first,e[i].second.second);
    }
    for (int i=1;i<n;i++){
        if(dsu.find(i)!=dsu.find(i+1)){
            cout<<"-1\n";
            return 0;
        }

    }
    cout<<t<<'\n';
}