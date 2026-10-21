#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    while(true){
        int n;
        cin>>n;
        if(n==0) return 0;
        queue<int> q;
        for(int i=1;i<=n;i++)q.push(i);
        cout<<"Discarded cards:";
        while(q.size()>1){
            cout<<" "<<q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            if(q.size()!=1)cout<<",";
        }
        cout<<'\n';
        cout<<"Remaining card: "<<q.front()<<'\n';
    }
}