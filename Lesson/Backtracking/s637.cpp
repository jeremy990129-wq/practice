#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    do{
        for(int i:v) cout<<i<<' ';
        cout<<'\n'
    }while(next_permutation(v.begin(),v.end()));
}