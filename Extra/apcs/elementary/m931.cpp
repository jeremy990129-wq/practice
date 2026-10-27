#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    vector<vector<int>> v;
    while(n--){
        int a,d;
        cin>>a>>d;
        v.push_back({a*a+d*d,a,d});
    }
    sort(v.begin(),v.end(),greater<vector<int>>());
    cout<<v[1][1]<<" "<<v[1][2]<<'\n';
}
