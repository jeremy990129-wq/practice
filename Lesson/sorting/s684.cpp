#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios:: sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> used(n,1);
    int ans=0;
    for(auto &i:v){
        cin>>i;
        i-=1;
    }
    for(int i=0;i<n;i++){
        if(used[i]==0){
            continue;
        }
        int ii=i;
        while(true){
            if(used[ii]==0){
                ans++;
                break;
            }   
            used[ii]=0;
            ii=v[ii];
        }                        
    }
    cout<<n-ans;

}