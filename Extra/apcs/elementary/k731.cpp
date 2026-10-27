#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    int x=0,y=0,s=1;
    int l=0,r=0,t=0;
    while(n--){
        int xx,yy;
        cin>>xx>>yy;
        if(xx-x==0){
            if(yy-y>0){
                if(s==1)l++;
                else if(s==2)t++;
                else if(s==3)r++;
                s=0;
            }else{
                if(s==0)t++;
                else if(s==1)r++;
                else if(s==3)l++;
                s=2;
            }
        }else{
            if(xx-x>0){
                if(s==0)r++;
                else if(s==2)l++;
                else if(s==3)t++;
                s=1;
            }else{
                if(s==0)l++;
                else if(s==1)t++;
                else if(s==2)r++;
                s=3;
            }
        }
        x=xx;
        y=yy;
    }
    cout<<l<<" "<<r<<" "<<t<<'\n';
}