#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios:: sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    fastio;
    int n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    while(q--){
        int a;
        cin>>a;
        cout<<v[a-1]<<'\n';
    }
}