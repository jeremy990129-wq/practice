#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    while(q--){
        ll a;
        cin>>a;
        bool b=false;
        for(int l=0,r=0;r<n;r++){
            while(l<r && v[r]-v[l]>a){
                l++;
            }
            if(v[r]-v[l]==a){
                cout<<"YES"<<'\n';
                b=true;
                break;
            }
        }
        if(!b){
            cout<<"NO"<<'\n';
        }
    }
}