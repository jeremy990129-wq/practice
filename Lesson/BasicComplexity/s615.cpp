#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,k;
    
    cin>>n>>k;
    ll ans=0;
    vector<int>v(n);
    for (auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        auto lb =lower_bound(v.begin(),v.begin()+i,k-v[i]);
        auto ub =upper_bound(v.begin(),v.begin()+i,k-v[i]);
        ans+=ub-lb;
    }
    cout<<ans<<endl;
    
}