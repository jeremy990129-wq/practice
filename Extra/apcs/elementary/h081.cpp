#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,d;
    cin>>n>>d;
    int x;
    cin>>x;
    n--;
    bool own=true;
    int ans=0;
    while(n--){
        int y;
        cin>>y;
        if(own){
            if(y>=x+d){
                ans+=(y-x);
                own=false;
                x=y;
            }
        }else{
            if(y<=x-d){
                own=true;
                x=y;
            }
        }
    }
    cout<<ans<<'\n';
}