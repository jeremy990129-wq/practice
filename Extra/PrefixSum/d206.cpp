#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    while(cin>>n){
        vector<vector<int>> prefix(n+1,vector<int>(n,0));
        for(int i=1;i<=n;i++){
            for(int j=0;j<n;j++){
                int a;
                cin>>a;
                prefix[i][j]=prefix[i-1][j]+a;
            }
        }
        int ans_sum=INT_MIN;
        for(int top=0;top<n;top++){
            for(int bottom=top+1;bottom<=n;bottom++){
                int sum=0;
                for(int c=0;c<n;c++){
                    sum+=(prefix[bottom][c]-prefix[top][c]);
                    ans_sum=max(sum,ans_sum);
                    if(sum<0)sum=0;
                }
            }
        }
        cout<<ans_sum<<'\n';
    }
}