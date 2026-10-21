#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    vector<ll> v(n);
    for(auto &i:v)cin>>i;
    map<ll,ll> mp;
    int mx=0;
    for(int l=0,r=0;r<n;r++){
        if(mp[v[r]]==1){
            while(v[l]!=v[r]){
                mp[v[l]]--;
                l++;
            }
            l++;    
        }else{
            mp[v[r]]++;
            mx=max(mx,r-l+1);
        }
            
    }
    cout<<mx<<'\n';
}