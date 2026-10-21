#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    string s;
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        getline(cin,s);
        vector<int> v(26,0);
        for(char i:s){
            if(i<='z'&&i>='a') v[i-'a']++;
            if(i<='Z'&&i>='A') v[i-'A']++;
        }
        int mx=*max_element(v.begin(),v.end());
        for(int i=0;i<26;i++){
            if(v[i]==mx)cout<<char(i+'a');
        }
        cout<<'\n';
    }
}