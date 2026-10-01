#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(auto &i:v)for(auto &j:i)cin>>j;
    bool b=true;
    int ans=0;
    while(b){
        b=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]!=-1){
                    for(int a=i+1;a<n;a++){
                        if(v[a][j]==v[i][j]){
                            ans+=v[i][j];
                            v[a][j]=-1;
                            v[i][j]=-1;
                            b=true;
                            break;
                        }else if(v[a][j]>=0){
                            break;
                        }
                    }
                    if(!b){
                        for(int a=j+1;a<m;a++){
                            if(v[i][a]==v[i][j]){
                                ans+=v[i][j];
                                v[i][a]=-1;
                                v[i][j]=-1;
                                b=true;
                                break;
                            }else if(v[i][a]>=0){
                                break;
                            }
                        }

                    }
                }
            }
        }    
    }
    cout<<ans<<'\n';
}