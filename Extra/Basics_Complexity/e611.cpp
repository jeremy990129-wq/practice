#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    fastio;
    while(true){
        int n;
        cin>>n;
        if(n==0)break;
        string a;
        cin>>a;
        int d=-1,r=-1;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]=='Z'){
                mn=0;
                break;
            }else if(a[i]=='R'){
                r=i;
            }else if(a[i]=='D'){
                d=i;
            }
            if(d!=-1&&r!=-1)mn=min(mn,abs(d-r));
        }
        cout<<mn<<'\n';
    }
}