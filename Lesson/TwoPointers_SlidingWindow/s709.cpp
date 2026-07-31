#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    ll g;
    cin>>n>>g;

    vector<int>v(n);
    for(auto &i:v) cin>>i;
    
    ll mn=numeric_limits<long long>::max()/2;
    ll s=0;
    for(int r=0,l=0;r<n;r++){
        s+=v[r];
        while(s>=g+v[l]){
            s-=v[l];
            l++;
        }
        if (s>=g){
        mn=min(mn,(ll)(r-l+1));
        }

    }
    if(mn>n){
        cout<<-1<<'\n';
    }else{
        cout<<mn<<'\n';
    }
}