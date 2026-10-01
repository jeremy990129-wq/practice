#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios:: sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(auto &i:v)cin>>i.second>>i.first;
    for(auto &i:v)i.second=-1*i.second;
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(auto &i:v){
        cout<<-1*i.second<<" "<<i.first<<'\n';
    }
}