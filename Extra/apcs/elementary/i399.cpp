#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    vector<int> v(9,0);
    for(int i=0;i<3;i++){
        int a;
        cin>>a;
        v[a]++;
    }
    cout<<*max_element(v.begin(),v.end())<<" ";
    for(int i=9;i>=1;i--){
        if(v[i])cout<<i<<" ";
    }
}