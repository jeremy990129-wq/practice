#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    int k=*max_element(v.begin(),v.end());
    int a=(accumulate(v.begin(),v.end(),0)-k)/m;
    int r;
    if((accumulate(v.begin(),v.end(),0)-k)%m>m/2){
        r=m-(accumulate(v.begin(),v.end(),0)-k)%m;
    }else{
        r=(accumulate(v.begin(),v.end(),0)-k)%m;
    }
    cout<<k<<" "<<a<<" "<<r<<'\n';
}
