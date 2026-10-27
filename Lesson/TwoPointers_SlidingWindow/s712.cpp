#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main(){
    fastio;
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    
    int l=0,r=n-1;
    int lm=0,rm=0;
    ll ans=0;
    
    while(l<r){
        if(v[l]<v[r]){
            if(v[l]>=lm){
                lm=v[l];
            }else{
                ans+=lm-v[l];
            }
            l++;
        }else{
            if(v[r]>=rm){
                rm=v[r];
            }else{
                ans+=rm-v[r];
            }
            r--;
        }
    }
    
    cout<<ans<<'\n';
}
