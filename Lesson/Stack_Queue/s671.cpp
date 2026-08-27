#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    fastio;
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    v.push_back(0);
    stack<int> st;
    ll mx=0;
    for(int i=0;i<=n;i++){
        while(!st.empty() && v[st.top()]>v[i]){
            int h=v[st.top()];
            st.pop();
            int w=st.empty() ? i : (i - st.top() - 1);
            mx=max(mx,(ll)h*w);
        }
        st.push(i);
    }
    cout<<mx;
}