#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){
            cout<<-1<<'\n';
            continue;
        }
        vector<vector<int>> ans(n,vector<int>(n));
        int a=1;
        for(int i=0;i<=2*n-2;i+=2){
            int x=i;
            int y=0;
            if(i>n-1){
                x=(n-1);
                y=i-n+1;
            }
            while(x>=0&&y<n){
                ans[x][y]=a;
                x--;
                y++;
                a++;
            }
        }
        for(int i=1;i<2*n-2;i+=2){
            int x=i;
            int y=0;
            if(i>n-1){
                x=(n-1);
                y=i-n+1;
            }
            while(x>=0&&y<n){
                ans[x][y]=a;
                x--;
                y++;
                a++;
            }
        }
        for(auto i:ans){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<'\n';
        }
    }
}
