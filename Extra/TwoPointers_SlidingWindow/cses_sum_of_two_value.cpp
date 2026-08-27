#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,x;
    cin>>n>>x;
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        int b=x-a;
        if(mp.count(b)){
            cout<<mp[b]<<" "<<i;
            return 0;
        }
        mp[a]=i;
    }
    cout<<"IMPOSSIBLE";


}