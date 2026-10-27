#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        int t;
        cin>>t;
        if((a+b)-t%(a+b)<=b){
            ans+=((a+b)-t%(a+b));
        }
    }
    cout<<ans;
}