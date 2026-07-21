#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    ll n,a,i;
    ll sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin >>a;
        sum+=a;
    }
    cout<<sum;
}