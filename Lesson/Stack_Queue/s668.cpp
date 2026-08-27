#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios:: sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    fastio;
    int n;
    cin>>n;
    stack<ll> st;
    while(n--){
        string a;
        cin>>a;
        if(!(a=="+" || a=="-" || a=="*" || a=="/")){
            st.push((ll)stoi(a));
        }else{
            ll x=st.top();
            st.pop();
            ll x1=st.top();
            st.pop();
            if(a=="*"){
                st.push(x*x1);
            }else if(a=="/"){
                st.push(x1/x);
            }else if(a=="+"){
                st.push(x+x1);
            }else if(a=="-"){
                st.push(x1-x);
            }
        }
    }
    cout<<st.top();
}