#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int r,c,d;
    cin>>r>>c>>d;
    vector<vector<int>> v(r,vector(c,d));
    vector<vector<int>> din(r,vector(c,0));
    int k;
    cin>>k;
    while(k--){
        int rr,cc;
        cin>>rr>>cc;
        din[rr][cc]++;
    }
    int m;
    cin>>m;
    while(m--){
        int a,b,s,dd;
        cin>>a>>b>>s>>dd;
        int xu=a-s/2;
        int xv=a+s/2;
        if(xu<0){
            xu=0;
        }
        if(xv>=r){
            xv=r-1;
        }
        int yu=b-s/2;
        int yv=b+s/2;
        if(yu<0){
            yu=0;
        }
        if(yv>=c){
            yv=c-1;
        }
        bool hd=false;
        for(int i=xu;i<=xv;i++){
            for(int j=yu;j<=yv;j++){
                if(din[i][j]){
                    hd=true;
                }
            }
        }
        if(hd){
            for(int i=xu;i<=xv;i++){
                for(int j=yu;j<=yv;j++){
                    din[i][j]=0;
                }
            }
        }else{
            for(int i=xu;i<=xv;i++){
                for(int j=yu;j<=yv;j++){
                    v[i][j]-=dd;
                }
            }
        }
    }
    int sum=0;
    for(auto &i:din){
        for(auto &j:i){
                sum+=j;
        }
    }
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(auto &i:v){
        mn=min(*min_element(i.begin(),i.end()),mn);
        mx=max(*max_element(i.begin(),i.end()),mx);
    }
    cout<<mx<<" "<<mn<<" "<<sum<<'\n'; 
}