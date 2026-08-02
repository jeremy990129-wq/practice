#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)


int main()
{
    fastio;
    ll i,n,x,a,c,m;
    ll xx=0;
    ll maxx=0;
    cin>>n>>x>>a>>c>>m;
    
    ll sum=0;
    for(i=0;i<n;i++){
        xx=(a*x+c)%m;
        sum+=xx;
        x=xx;
        if (maxx<=xx){
            maxx=xx;
        }
        
    }
    
    
    cout<<maxx<<" "<<sum;

    return 0;
}
