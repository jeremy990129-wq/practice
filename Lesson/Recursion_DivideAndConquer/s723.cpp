#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
vector<vector<char>> solve(int n,vector<vector<char>> &a,vector<vector<char>> &ans,int k){
    if(k==n)return ans;
    vector<vector<char>> nxt(3*ans.size(),vector<char>(3*ans.size(),'.'));
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans.size();j++){
            if(ans[i][j]=='#'){
                for(int x=0;x<3;x++){
                    for(int y=0;y<3;y++){
                        nxt[3*i+x][3*j+y]=a[x][y];
                    }
                }
            }
        }
    }
    return solve(n,a,nxt,k+1);

    
}
int main(){
    fastio;
    int n;
    cin>>n;
    if(!n){
        cout<<'#'<<'\n';
        return 0;
    }
    vector<vector<char>> a(3,vector<char>(3));
    for(auto &i:a)for(auto &j:i) cin>>j;
    vector<vector<char>> ans;
    ans=a;
    ans=solve(n,a,ans,1);
    for(auto i:ans){
        for(auto j:i)cout<<j;
        cout<<'\n';
    }

}