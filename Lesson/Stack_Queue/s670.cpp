#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    fastio;
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a) cin>>i;
    deque<int> dq;
    for(int i=0;i<n;i++){
        while(!dq.empty()&&dq.front()<i-k+1)dq.pop_front();
        while(!dq.empty()&&a[dq.back()]<=a[i])dq.pop_back();
        dq.push_back(i);
        if(i>=k-1)cout<<a[dq.front()]<<" ";
    }
}