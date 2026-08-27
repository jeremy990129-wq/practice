#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios:: sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    
    int n,k;
    cin>>n>>k;
    queue<int> q;
    for (int i=1;i<=n;i++){
        q.push(i);
    }
    while(!q.empty()){
        
        int x=(k-1)%q.size();
        for (int i=0;i<x;i++){
            q.push(q.front());
            q.pop();
        }

        cout<<q.front()<<" ";
        q.pop();
    }
}