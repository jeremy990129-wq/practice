#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    ll n,w;
    cin>>n>>w;
    vector<ll> v(n);
    for(auto &i:v) cin>>i;
    ll l=0;
    ll r=n-1;
    while(l<r){

        if(v[l]+v[r]<w){
            l++;
        }else if(v[l]+v[r]>w){
            r--;
        }else{
            cout<<l+1<<" "<<r+1;
            break;
        }

    }
    

}
