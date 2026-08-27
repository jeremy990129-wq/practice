#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;

    int n;
    cin>>n;
    ll s=0;
    while(n--){
        ll a;
        cin>>a;
        s+=a;
        cout<<s<<" ";
    }
}