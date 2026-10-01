#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int xx[4]={0,1,0,-1};
    int yy[4]={1,0,-1,0};
    int m,n,k,r,c;
    cin>>m>>n>>k>>r>>c;
    vector<vector<int>> v(m,vector<int>(n));
    for(auto &i:v)for(auto &j:i)cin>>j;
    int sum=0;
    int ans=0;
    int i=0;
    while(v[r][c]){
        sum+=v[r][c];
        v[r][c]--;
        ans++;
        if(sum%k==0){
            i=(i+1)%4;
        }
        bool moved = false;
        for(int a=0;a<4;a++){
            if(r+xx[(i+a)%4]<m&&0<=r+xx[(i+a)%4]&&c+yy[(i+a)%4]<n&&0<=c+yy[(i+a)%4]){
                if(v[r+xx[(i+a)%4]][c+yy[(i+a)%4]]!=-1){
                    r=r+xx[(i+a)%4];
                    c=c+yy[(i+a)%4];
                    i=(i+a)%4;
                    moved=true;
                    break;
                }
            }
        }
        if(!moved){
            break;
        }
    }
    cout<<ans<<'\n';

}