#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    stack<ll> st;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            ll b;
            cin>>b;
            st.push(b);
        }else if(a==2){
            cout<<((st.empty())? -1:st.top())<<'\n';
        }else if(a==3 && !st.empty())st.pop();
            
        
    }
}