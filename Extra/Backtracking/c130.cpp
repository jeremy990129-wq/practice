#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

bool found;
void backtrack(int m,int n,int sum,vector<int> &v,vector<int> &ans,int now){
    if(sum>m)return;
    if(sum==m){
        found = true;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i + 1 == ans.size() ? "" : "+");
        }
        cout << '\n';
        return;
    }
    for(int i=now;i<n;i++){
        if(i>now && v[i]==v[i-1])continue;
        ans.push_back(v[i]);
        backtrack(m,n,sum+v[i],v,ans,i+1);
        ans.pop_back();
    }
}
int main(){
    while(true){
        found=false;
        int t,n;
        cin>>t>>n;
        if(t==0 && n==0)return 0;
        cout<<"Sums of "<<t<<":"<<'\n';
        vector<int> v(n);
        for(auto &i:v)cin>>i;
        vector<int> ans;
        backtrack(t,n,0,v,ans,0);
        if (!found) {
            cout << "NONE" << '\n';
        }
    }
}