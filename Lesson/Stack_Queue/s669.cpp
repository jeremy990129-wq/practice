#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    fastio;
    int n;
    cin>>n;
    vector<int> ans(n,0);
    stack<int> st;
    vector<int> a;
    int i =n;
    while(i--){
        int s;
        cin>>s;
        a.push_back(s);
    }    
    i=n;
    while(i){
        i--;
        while (!st.empty()&&a[st.top()]<=a[i]) st.pop();
        if (!st.empty()) ans[i]=st.top()-i;
        st.push(i);
    }    
    for(auto &i:ans)cout<<i<<" ";    
}