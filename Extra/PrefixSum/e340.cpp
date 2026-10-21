#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++)cin>>v[i];
    for(int i=1;i<=n;i++)cout<<v[i]-v[i-1]<<" ";
}