#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    stack<int> st;
    while(n--){
        int a;
        cin>>a;
        if(a==1)st.pop();
        else if(a==2)cout<<st.top()<<'\n';
        else{
            int b;
            cin>>b;
            st.push(b);
        }
    }
}