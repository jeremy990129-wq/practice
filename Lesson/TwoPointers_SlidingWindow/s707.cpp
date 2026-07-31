#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,k;
    ll s=0;
    cin>>n>>k;
    
    vector<ll> v(n);
    for(auto &i:v) cin>>i;
    for(int i=0;i<k;i++){
        s+=v[i];
    }
    ll mx=s;
    for(int r=k;r<n;r++){
        s+=v[r];
        s-=v[r-k];
        mx=max(s,mx);

    }
    cout<<mx<<'\n';

}
