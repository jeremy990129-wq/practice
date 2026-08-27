#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    vector<ll> prefix(n+1,0);
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        prefix[i+1]=prefix[i]+a;
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<'\n';
    }
}