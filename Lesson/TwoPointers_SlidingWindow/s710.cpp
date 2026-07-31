#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    map<int,int>mp;
    int cnt=0;
    int mx=0;
    for(int r=0,l=0;r<n;r++){
        mp[v[r]]++;
        if(mp[v[r]]==1){
            cnt++;
        }
        while(cnt>k){
            mp[v[l]]--;
            if(mp[v[l]]==0){
                cnt--;
            }
            l++;
        }
        mx=max(mx,r-l+1);
    }
    cout<<mx<<'\n';
}
