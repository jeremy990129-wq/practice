#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int d(int n,int m,vector<ll> &a,vector<ll> &b,vector<int> &r,vector<int> &die){
    if(r.size()==1){
        return r[0];
    }
    vector<int> w;
    vector<int> l;
    for(int i=0;i<r.size();i+=2){
        if(i+1==r.size()){
            w.push_back(r[i]);
            continue;
        }
        ll aa=a[r[i]-1];
        ll bb=b[r[i]-1];
        ll cc=a[r[i+1]-1];
        ll dd=b[r[i+1]-1];
        if(aa*bb>=cc*dd){
            a[r[i]-1]=aa+(cc*dd)/(2*bb);
            b[r[i]-1]=bb+(cc*dd)/(2*aa);
            a[r[i+1]-1]=cc+cc/2;
            b[r[i+1]-1]=dd+dd/2;
            die[r[i+1]-1]++;
            w.push_back(r[i]);
            if(die[r[i+1]-1]<m) {
                l.push_back(r[i+1]);
            }
        }else{
            a[r[i+1]-1]=cc+(aa*bb)/(2*dd);
            b[r[i+1]-1]=dd+(aa*bb)/(2*cc);
            a[r[i]-1]=aa+aa/2;
            b[r[i]-1]=bb+bb/2;
            die[r[i]-1]++;
            w.push_back(r[i+1]);
            if(die[r[i]-1]<m) {
                l.push_back(r[i]);
            }
        }
    }
    for(auto &i:l)w.push_back(i);
    return d(n,m,a,b,w,die);
        
    
}
int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<int> r(n);
    vector<int> die(n,0);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    for(auto &i:r)cin>>i;
    cout<<d(n,m,a,b,r,die)<<'\n';
}