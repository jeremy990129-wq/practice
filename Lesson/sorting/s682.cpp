#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(auto &i:v)cin>>i.first>>i.second;
    sort(v.begin(),v.end());
    vector<pair<ll,ll>> ans;
    for(int i=0;i<n;i++){
        if(ans.empty() || v[i].first>ans.back().second){
            ans.push_back(v[i]);
        }else{
            ans.back().second=max(v[i].second,ans.back().second);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto &i:ans)cout<<i.first<<" "<<i.second<<'\n';
}