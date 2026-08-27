#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios:: sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main(){
    string a;
    cin>>a;

    map<char,char> mp;
    mp['(']=')';
    mp['[']=']';
    mp['{']='}';
    
    stack<char> st;
    for(int i=0;i<a.size();i++){
        
        if(!st.empty() && mp[st.top()]==a[i]){
            st.pop();
        }else{
            st.push(a[i]);
        }
    }
    cout<<((st.empty())?"YES":"NO");
    
}