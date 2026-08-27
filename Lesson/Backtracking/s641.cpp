#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)


int ans=0;
void backtrack(int n,vector<string> &v,vector<vector<int>> &f,int r){
    
     if (r == n) {
        ans++;
        return;
    }
    
    for(int j=0;j<n;j++){
        
        if(f[r][j]==0 && v[r][j]=='.'){
            vector<vector<int>> ff=f;
            for(int i=r,k=0;i<n;i++,k++){
                f[i][j]=1;
                if(j-k>=0){
                    f[i][j-k]=1;
                }
                if(j+k<n){
                    f[i][j+k]=1;
                }
            }
            backtrack(n,v,f,r+1);
            f=ff;
        }

    }

}
int main(){
    fastio;
    int n;
    cin>>n;
    vector<string> v(n);
    for (auto &i:v) cin>>i;
    vector<vector<int>> f(n,vector<int>(n,0));
    backtrack(n,v,f,0);
    cout<<ans<<'\n';
}