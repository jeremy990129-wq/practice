#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    int n,q;
    cin>>n>>q;
    vector<ll> v(n);
    vector<ll> diff(n+1,0);
    for (auto &i:v) cin>>i;
    while(q--){
        int l,r,v1;
        cin>>l>>r>>v1;
        diff[l-1]+=v1;
        diff[r]-=v1;
    }
    
    ll difff=0;
    for(int i=0;i<n;i++){
        difff+=diff[i];
        cout<<v[i]+difff<<" ";
        
    }
}