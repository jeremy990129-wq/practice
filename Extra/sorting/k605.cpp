#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    vector<vector<string>> v(n,vector<string>(7));
    for(auto &i:v)for(auto &j:i)cin>>j;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=2;j<7;j++){
            sum+=stoi(v[i][j]);
        }
        a.push_back({sum,-i});
    }
    sort(a.begin(),a.end(),greater<pair<int,int>>());
    int num=0;
    for(int i=0;i<n;i++){
        for(auto &j:v[-(a[i].second)]) cout<<j<<" ";
        if(i>0 && a[i].first==a[i-1].first){
            cout<<a[i].first<<" "<<num<<'\n';
        }else{
            num=i+1;
            cout<<a[i].first<<" "<<num<<'\n';
        }
        
    }
}
