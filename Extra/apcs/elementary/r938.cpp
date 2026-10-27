#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    vector<pair<int,int>> v(6);
    v[1]={25,10};
    v[2]={10,20};
    v[3]={5,15};
    v[4]={4,20};
    v[5]={-10,-15};
    int n;
    cin>>n;
    vector<int> op(n);
    for(auto &i:op)cin>>i;
    int l=0;
    int e=0;
    for(auto &i:op){
        if(i==6){
            l=max(0,i-35);
            e=0;
        }else if(i==7){
            l=0;
            e*=9;
            e=e/10;
        }else{
            l+=v[i].first;
            e+=v[i].second;
        }
        if(l>100){
            l=0;
            e=0;

        }
    }
    cout<<e<<'\n';
}
