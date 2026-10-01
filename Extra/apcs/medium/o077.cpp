#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int h,w,n;
    cin>>h>>w>>n;
    vector<vector<int>> v(h,vector<int>(w,0));
    while(n--){
        int r,c,t,x;
        cin>>r>>c>>t>>x;
        int r0=r-t;
        int c0=c-t;
        int xx=1;
        for(int i=0;i<=t;i++){
            for(int j=0;j<xx;j++){
                if(r0<h&&0<=r0&&c0+t-i+j<w&&0<=c0+t-i+j){
                    v[r0][c0+t-i+j]+=x;
                }
            }
            r0++;
            xx+=2;
        }
        xx=2*t-1;
        for(int i=1;i<=t;i++){
            for(int j=0;j<xx;j++){ 
                if(r0<h&&0<=r0&&c0+i+j<w&&0<=c0+i+j){
                    v[r0][c0+i+j]+=x;
                }
            }
            r0++;
            xx-=2;
        }
    }
    for(auto &i:v){
        for(auto &j:i)cout<<j<<" ";
        cout<<'\n';
    }
} 