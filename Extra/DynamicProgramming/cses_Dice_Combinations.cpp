#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define MOD 1000000007
int main(){
    int n;
    cin>>n;
    vector<ll> v(n+1,0);
    v[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                v[i]=(v[i]+v[i-j])%MOD;
            }
        }
    }
    cout<<v[n]<<'\n';
}