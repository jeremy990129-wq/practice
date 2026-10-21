#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<char>> a(m,vector<char>(n));
    for(auto &i:a)for(auto &j:i)cin>>j;
    vector<char> s(n);
    for(auto &i:s)cin>>i;
    for(int i=m-1;i>=0;i--){
        deque<char> ds;
        for(int j=n-1;j>=0;j--){
            if(a[i][j]=='1'){
                ds.push_back(s[j]);
            }else{
                ds.push_front(s[j]);
            }
        }
        for(auto &j:s){
            j=ds.front();
            ds.pop_front();
        }
        if(count(a[i].begin(),a[i].end(),'1')%2==1){
            if(n%2==0){
                for(int j=0;j<n/2;j++){
                    swap(s[j],s[j+n/2]);
                }
            }else{
                for(int j=0;j<n/2;j++){
                    swap(s[j],s[j+(n+1)/2]);
                }
            }
        }
        
    }
    for(auto &i:s) cout<<i;
}