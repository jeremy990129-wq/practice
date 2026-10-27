#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,w1,w2,h1,h2;
    cin>>n>>w1>>w2>>h1>>h2;
    int a1=w1*w1;
    int a2=w2*w2;
    int ans=0;
    while(n--){
        int t;
        cin>>t;
        if(t>=a1*h1+a2*h2){
            ans=max(ans,h1+h2);
            h1=0;
            h2=0;
        }else if(t<a1*h1+a2*h2&&t>=a1*h1){
            ans=max(ans,h1+(t-a1*h1)/a2);
            h1=0;
            h2-=(t-a1*h1)/a2;
        }else{
            ans=max(ans,t/a1);
            h1-=t/a1;
        }
    }
    cout<<ans;

} 