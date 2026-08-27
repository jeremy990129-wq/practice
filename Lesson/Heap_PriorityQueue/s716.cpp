#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    fastio;
    int n;
    cin>>n;
    priority_queue<int> pql;
    priority_queue<int,vector<int>,greater<int>> pqr;

    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        pql.push(a);
        if(i==1){
            
        }else if(i%2==1){
            
            if(pql.top()>pqr.top()){
                
                pql.push(pqr.top());
                pqr.push(pql.top());
                pqr.pop();
                pql.pop();
            }
        }else{
            pqr.push(pql.top());
            pql.pop();  
        }
    cout<<pql.top()<<'\n';
    }

}