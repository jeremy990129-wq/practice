#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    vector<int> v(n+2,INT_MAX);
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        v[i]=a;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(v[i]==0){
            ans+=(min(v[i-1],v[i+1]));
        }
    }
    cout<<ans<<'\n';
    
}