#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n;
    cin>>n;
    cout<<"Lumberjacks:"<<'\n';
    while(n--){
        vector<int> v(10);
        for(auto &i:v)cin>>i;
        vector<int> v1(v);
        sort(v1.begin(),v1.end());
        bool a=true;
        for(int i=0;i<10;i++){
            if(v[i]!=v1[i])a=false;
        }
        if(a){
            cout<<"Ordered"<<'\n';
            continue;
        }
        a=true;
        sort(v1.begin(),v1.end(),greater<int>());
        for(int i=0;i<10;i++){
            if(v[i]!=v1[i])a=false;
        }
        if(a){
            cout<<"Ordered"<<'\n';
            continue;
        }
        cout<<"Unordered"<<'\n';
    }
}
