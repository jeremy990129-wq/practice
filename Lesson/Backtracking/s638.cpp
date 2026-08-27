#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
void backtrack(int n,vector<int>&used,vector<int> &v,vector<int> &ans,int k){
    if (k==n){
        for(int i:ans) cout<<i<<" ";
        cout<<'\n';
        return;
    }
    for(int i=0;i<n;i++){
        if (used[i]) continue;

        if (i>0 && v[i]==v[i-1] && !used[i-1]) continue;

        ans.push_back(v[i]);
        used[i]=1;
        backtrack(n,used,v,ans,k+1);
        ans.pop_back();
        used[i]=0;
    }    
}
    
int main(){
    fastio;
    int n;
    cin>>n;
    vector<int> v(n),used(n,0), ans;
    for(auto &i:v) cin>>i;
    sort(v.begin(), v.end());
    backtrack(n,used,v,ans,0);

}

