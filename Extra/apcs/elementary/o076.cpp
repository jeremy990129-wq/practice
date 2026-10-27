#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int ans=1;
    int dist=1;
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            dist=1;
        }else{
            dist++;
        }
        ans=max(ans,dist);
    }
    cout<<ans;
}