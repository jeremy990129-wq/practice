#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    while(true){
        int n;
        cin>>n;
        if(n==0) return 0;
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        while(n--){
            int a;
            cin>>a;
            pq.push(a);
        }
        ll ans=0;
        while(pq.size()>=2){
            ans+=pq.top();
            int b=pq.top();
            pq.pop();
            ans+=pq.top();
            b+=pq.top();
            pq.pop();
            pq.push(b);
        }
        cout<<ans<<'\n';
    }

}