#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)



int xx[4] ={-1,1,0,0};
int yy[4] ={0,0,-1,1};
bool backtrack(vector<vector<char>> &v,int i,int j,vector<vector<int>> &used,string &s,int k){
    
    if (v[i][j]!=s[k]) return false;

    used[i][j]=1;
    if(k==s.size()-1) return true;

    for(int l=0;l<4;l++){
        if((i+xx[l])>=0 && (i+xx[l])<v.size() && (i+yy[l])>=0 && (i+yy[l])<v[0].size() && !used[i+xx[l]][j+yy[l]]){
            if (backtrack(v,i+xx[l],j+yy[l],used,s,k+1)==true){
                return true;
            }
        }
    }
    used[i][j] = 0;
    return false;
}   
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<char>> v(r,vector<char>(c));
    vector<vector<int>> f(r,vector<int>(c,0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];
            
        }
    }
    string a;
    cin >>a;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if (backtrack(v,i,j,f,a,0)){
                cout<<"YES"<<'\n';
                return 0;
            }
        }
    }
    cout<<"NO"<<'\n';
}