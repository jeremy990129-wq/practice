#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)


int mn=INT_MAX;

int opt(int r,int n,vector<vector<int>> &v){
    int sum=0;
    for(int i=r;i<n;i++){
        sum+=*min_element(v[i].begin(),v[i].end());
    }
    return sum;
}
void backtrack(int n,vector<vector<int>> &v,vector<int> &used,int r,int sum){
    if (sum+opt(r,n,v)>=mn) return;
    if(r==n){
       mn=min(sum,mn);
       return;
    }
    for(int i=0;i<n;i++){
        if(used[i]==0){
            used[i]=1;
            backtrack(n,v,used,r+1,sum+v[r][i]);
            used[i]=0;
        }
    }

}


int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    for(auto &i:v){
        for(auto &j:i)cin>>j;
    }
    vector<int> used(n,0);
    backtrack(n,v,used,0,0);
    cout<<mn<<'\n';
}