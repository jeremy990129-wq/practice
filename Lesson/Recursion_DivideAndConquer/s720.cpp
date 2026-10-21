#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync with stdio(0), cin.tie(0) ,cout.tie(0)
#define MOD 1000000007
ll POW(ll a,ll n){
    ll ans=1;
    while(n){
        if(n&1){
            ans=((ans%MOD)*(a%MOD))%MOD;    
        }
        a=(a%MOD)*(a%MOD);
        n>>=1;
    }
    return ans;
}
int main(){
    ll a,n;
    cin>>a>>n;
    cout<<POW(a,n)<<'\n';
}