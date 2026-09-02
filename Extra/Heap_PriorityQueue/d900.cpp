#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m;
    cin>>n>>m;
    priority_queue<int,vector<int>,greater<int>> pq;
    while (m--)pq.push(0);
    while(n--){
        int w;
        cin>>w;
        int nw=pq.top()+w;
        pq.pop();
        pq.push(nw);
    }
    int ans=0;
    while(!pq.empty()){
        ans=pq.top();
        pq.pop();
    }
    cout<<ans<<'\n';
    
}