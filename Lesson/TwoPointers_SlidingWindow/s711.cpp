#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n;
    ll k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &i:v)cin>>i;

    ll s=0;
    ll ans=0;
    for(int r=0,l=0;r<n;r++){
        s+=v[r];
        while(s>k){
            s-=v[l];
            l++;
        }
        if (s<=k){
            ans+=(r-l+1);
        }
    }

    cout<<ans<<'\n';
    
}