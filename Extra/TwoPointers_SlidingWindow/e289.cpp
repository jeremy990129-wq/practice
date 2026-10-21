#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int m,n;
    cin>>m>>n;
    int ans=0;
    vector<string> v(n);
    map<string,ll> mp;
    int size=0;
    for(auto &i:v)cin>>i;
    for(int r=0,l=0;r<n;r++){
        while(r-l>=m){
            if(mp[v[l]]==1){
                size--;
            }
            mp[v[l]]--;
            l++;
        }
        if(!mp[v[r]]){
            size++;
        }
        mp[v[r]]++;
        
        if(size==m)ans++;
                
    }
    cout<<ans<<'\n';
}