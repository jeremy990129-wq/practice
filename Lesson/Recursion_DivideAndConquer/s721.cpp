#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
ll solve(int l,int r,vector<ll>&a){
    if(l==r)return a[l];
    int m=l+(r-l)/2;
    ll lmx=solve(l,m,a);
    ll rmx=solve(m+1,r,a);
    ll crmx=-LLONG_MAX;
    ll s=0;
    for(int i=m+1;i<=r;i++){
        s+=a[i];
        crmx=max(crmx,s);
    }
    ll clmx=-LLONG_MAX;
    s=0;
    for(int i=m;i>=l;i--){
        s+=a[i];
        clmx=max(clmx,s);
    }
    return(max({lmx,rmx,clmx+crmx}));
}
int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(auto &i:a)cin>>i;
    cout<<solve(0,n-1,a)<<'\n';

}