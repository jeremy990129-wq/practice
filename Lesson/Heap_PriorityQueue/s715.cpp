#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &i:v)cin>>i;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(v[i]);
        if(pq.size()>k){
            pq.pop();
        }
        cout<<((pq.size()>=k)?pq.top():-1)<<'\n';
    }
}