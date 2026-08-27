#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int q;
    cin>>q;
    int a=q;
    while(a){
        a--;
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &i:v)cin>>i;
        int h=0;
        int l=0;
        for(int i=0;i<n-1;i++){
            if(v[i]<v[i+1])h++;
            if(v[i]>v[i+1])l++;
        }
        cout<<"Case "<<q-a<<": "<<h<<" "<<l<<'\n';
    }
}
