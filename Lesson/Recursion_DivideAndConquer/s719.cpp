#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync with stdio(0), cin.tie(0) ,cout.tie(0)
vector<pair<int,int>> ans;
void a(int v,int u,int s,int x){
    if(x==0)return;
    a(v,s,u,x-1);
    ans.push_back({v,u});
    a(s,u,v,x-1);
} 
int main(){
    int n,s,t;
    cin>>n>>s>>t;
    a(s,t,6-s-t,n);
    cout<<ans.size()<<'\n';
    for(auto[x,y]:ans)cout<<x<<" "<<y<<'\n';
}