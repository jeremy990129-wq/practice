#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,e=0,mx=-1,mxt=0;
    cin>>n;
    int nn=n;
    while(n--){
        int t,s;
        cin>>t>>s;
        if(s>mx){
            mx=s;
            mxt=t;
        }
        if(s==-1)e++;
    }
    cout<<max(0,mx-nn-2*e)<<" "<<mxt;
} 