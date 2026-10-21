#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int xx[4]={-1,0,1,0};
    int yy[4]={0,1,0,-1};
    int n,m,b;
    cin>>n>>m>>b;
    int r,c;
    char ss;
    cin>>r>>c>>ss;
    r--;
    c--;
    int s;
    if(ss=='N')s=0;
    else if(ss=='E')s=1;
    else if(ss=='S')s=2;
    else if(ss=='W')s=3;
    vector<vector<int>> a(n,vector<int>(m));
    for(auto &i:a)for(auto &j:i)cin>>j;
    int l;
    cin>>l;
    vector<char> op(l);
    for(auto &i:op)cin>>i;
    int sd=0;
    int sb=0;
    sd+=a[r][c];
    a[r][c]=0;
    for(auto &i:op){
        if(i=='L'){
            s=((s-1)%4+4)%4;
        }else if(i=='R'){
            s=((s+1)%4+4)%4;
        }else if(i=='F'){
            if(0>r+xx[s]||r+xx[s]>=n||0>c+yy[s]||c+yy[s]>=m||a[r+xx[s]][c+yy[s]]==-1){
                if(b-2<0)break;
                b-=2;
                sb++;
                s=((s+1)%4+4)%4;
            }else{
                if(b-1<0)break;
                b--;
                sd+=a[r+xx[s]][c+yy[s]];
                a[r+xx[s]][c+yy[s]]=0;
                r+=xx[s];
                c+=yy[s];
            }
        }
    }
    char anss;
    if(s==0)anss='N';
    else if(s==1)anss='E';
    else if(s==2)anss='S';
    else if(s==3)anss='W';
    cout<<sd<<'\n'<<r+1<<" "<<c+1<<" "<<anss<<'\n'<<sb<<" "<<b;

}