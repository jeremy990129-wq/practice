#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int m,n,k;
    cin>>m>>n>>k;
    vector<vector<char>> v(m,vector<char>(n));
    for(auto &i:v)for(auto &j:i) cin>>j;
    int ans=0;
    while(k--){
        vector<int> t(m);
        for(auto &i:t) cin>>i;
        for(int i=0;i<m;i++){
            vector<char> r(n);
            for(int j=0;j<n;j++){
                r[((j+t[i])%n+n)%n]=v[i][j];
            }
            for(int j=0;j<n;j++){
                v[i][j]=r[j];
            }
        }
        for(int i=0;i<n;i++){
            vector<char> rr(50,0);
            for(int j=0;j<m;j++){
                rr[v[j][i]-'a']++;
            }
            ans+=*max_element(rr.begin(),rr.end());
        }

    }
    cout<<ans<<'\n';
}