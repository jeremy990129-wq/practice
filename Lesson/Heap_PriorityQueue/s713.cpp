#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    int n;
    cin>>n;

    int i=0;
    while(n--){
        int op;
        cin>>op;
        if(op==1){
            i++;
            int p;
            cin>>p;
            pq.push({p,i});
        }else{
            cout<<pq.top().second<<'\n';
            pq.pop();
        }
    }

}
