#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n%2||m%2){
            cout<<"Alice"<<'\n';
        }else{
            cout<<"Bob"<<'\n';
        }
    }
}