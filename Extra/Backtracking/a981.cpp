#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

bool a=true;
void backtrack(int n,vector<ll> &v,vector<ll> &ans,ll sum,ll m,int now){
    if(sum>m) return;
    if(sum==m){
        for(auto &i:ans)cout<<i<<" ";
        cout<<'\n';
        a=false;
        return;
    }
    for(int i=now;i<n;i++){
        ans.push_back(v[i]);
        backtrack(n,v,ans,sum+v[i],m,i+1);
        ans.pop_back();
    }

}



int main(){
    int n;
    ll m;
    cin>>n>>m;
    vector<ll> v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    vector<ll> ans;
    backtrack(n,v,ans,0,m,0);
    if(a)cout<<-1<<'\n';

}