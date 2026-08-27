#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
void backtrack(int n,int k,vector<int> &ans,int now){
    if(k==0){
        for(int i:ans) cout<<i<<' ';
        cout<<'\n';
    }
    for(int i=now+1;i<=n;i++){
        ans.push_back(i);
        backtrack(n,k-1,ans,i);
        ans.pop_back();
    }
    
    
}
int main(){
    fastio;
    int n,k;
    cin>>n>>k;
    vector<int>v;
    backtrack(n,k,v,0);
}