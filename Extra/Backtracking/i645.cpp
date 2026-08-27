#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

void backtrack(int n,int q,vector<int> &ans,int now,int k){
    if(k==q){
        for(auto &i:ans){
            char a=i+'a';
            cout<<a;
        }
        cout<<'\n';
        return;
    }
    for(int i=now;i<n;i++){

        ans.push_back(i);
        backtrack(n,q,ans,i+1,k+1);
        ans.pop_back();
        
    }

}

int main(){
    fastio;
    while(true){
        int m,n;
        cin>>m>>n;
        if(m==0&&n==0)return 0;
        vector<int> ans;
        backtrack(m,n,ans,0,0);

    }
}





