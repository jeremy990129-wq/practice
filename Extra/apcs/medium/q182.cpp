#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
vector<char> a(vector<char> &v){
    for(int i=0;i<(v.size())/2;i++){
        swap(v[i*2],v[i*2+1]);
    }
    return v;
}
vector<char> b(vector<char> &v){
    for(int i=0;i<(v.size())/2;i++){
        if(v[i*2]-'a'>v[i*2+1]-'a'){
            swap(v[i*2],v[i*2+1]);
        }
    }
    return v;
}
vector<char> c(vector<char> &v){
    vector<char> r;
    for(int i=0;i<(v.size())/2;i++){
        r.push_back(v[i]);
        r.push_back(v[i+v.size()/2]);
    }
    return r;
}
int main(){
    vector<char> v;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    int k;
    cin>>k;
    while(k--){
        int op;
        cin>>op;
        if(op==0){
            v=a(v);
        }else if(op==1){
            v=b(v);
        }else{
            v=c(v);
        }
    }
    for(auto &i:v)cout<<i;
    cout<<'\n';
}