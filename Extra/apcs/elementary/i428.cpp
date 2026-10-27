#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    n--;
    int mx=-INT_MAX;
    int mn=INT_MAX;
    while(n--){
        int xx,yy;
        cin>>xx>>yy;
        mx=max(mx,abs(xx-x)+abs(yy-y));
        mn=min(mn,abs(xx-x)+abs(yy-y));
        x=xx;
        y=yy;
    }
    cout<<mx<<" "<<mn<<'\n';
}