#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int ans=0;
void backtrack(int n,ll w,vector<ll> &v,ll a,int now){

    if(a>w){
        return;
    }else if(a==w){
        ans++;
    }else{
        for(int i=now;i<n;i++){
            a+=v[i];
            backtrack(n,w,v,a,i+1);
            a-=v[i];
        }
    }
}
int main(){
    int n;
    ll w;
    cin>>n>>w;
    vector<ll>v(n);
    for(auto &i:v) cin>>i;
    backtrack(n,w,v,0,0);
    cout<<ans;
}