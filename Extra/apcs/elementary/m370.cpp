#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int x,n;
    cin>>x>>n;
    int l=x,r=x;
    int rsum=0;
    int lsum=0;
    while(n--){
        int a;
        cin>>a;
        if(a>x)rsum++;
        if(a<x)lsum++;
        r=max(r,a);
        l=min(l,a);
    } 
    if(rsum>lsum){
        cout<<rsum<<" "<<r;
    }else{
        cout<<lsum<<" "<<l;
    }

}