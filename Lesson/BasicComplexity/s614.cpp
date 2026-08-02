#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    ll n;
    cin>>n;
    ll sum=((n+1)%1000000007LL)*(n%1000000007LL)/2;
    cout<<sum%1000000007LL;
}