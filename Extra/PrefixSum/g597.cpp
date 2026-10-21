#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vector<int> diff(n+2,0),a(n);
    while(m--){
        int l,r,w;
        cin>>l>>r>>w;
        diff[l]+=w;
        diff[r+1]-=w;
    }
    for (int i=1;i<=n;i++){
        diff[i]=diff[i]+diff[i-1];
    }
    vector<int> v(diff.begin() + 1, diff.begin() + n + 1);
    for(auto &i:a)cin>>i;
    sort(a.begin(),a.end());
    sort(v.begin(),v.end(),greater<int>());
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=(ll)(a[i]*v[i]);
    }
    cout<<ans<<'\n';


}