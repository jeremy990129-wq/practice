#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int k;
    cin>>k;
    int x1,y1;
    cin>>x1>>y1;
    int x2,y2;
    cin>>x2>>y2;
    int x=0;
    while(k>0){
        x+=k;
        if(x%x1==0&&x%x2==0){
            k-=(y1+y2);
        }else if(x%x2==0){
            k-=y2;
        }else if(x%x1==0){
            k-=y1;
        }
    }
    cout<<x;
}