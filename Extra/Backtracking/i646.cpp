#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
void backtrack(int n,vector<int> &used,vector<int> &ans,int k){
    if(k==n){
        for(auto &i:ans){
            char a=i+'a';
            cout<<a;
        }
        cout<<'\n';
    }
    for(int i=0;i<n;i++){
        if(used[i]==0){
            ans.push_back(i);
            used[i]=1;
            backtrack(n,used,ans,k+1);
            used[i]=0;
            ans.pop_back();
        }
    }

}

int main(){
    fastio;
    while(true){
        int n;
        cin>>n;
        if(n==0)return 0;
        vector<int> used(n,0);
        vector<int> ans;
        backtrack(n,used,ans,0);
    }
}