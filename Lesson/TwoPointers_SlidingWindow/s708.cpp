#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    ll k;
    cin>>n>>k;
    
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    ll s=0;
    ll mx=0;
    
    for(int r=0,l=0;r<n;r++){
        s+=v[r];
        while(s>k){
            s-=v[l];
            l++;
        }
        mx=max(mx,(ll)(r-l+1));
    }
    cout<<mx;

}