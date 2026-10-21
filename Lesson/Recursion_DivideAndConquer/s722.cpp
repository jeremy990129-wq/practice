#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
string solve(string &s,int &i){
    string ans;
    while(i<s.size()&&s[i] != ']'){
        if(!(s[i]>='1'&&s[i]<='9')){
            ans+=s[i];
            i++;
        }else{
            int t=s[i]-'0';
            i+=2;
            string is=solve(s,i);
            i++;
            while(t--){
                ans+=is;
            }
        }
        
    }

    return ans;

}

int main(){
    string s;
    cin>>s;
    int i=0;
    cout<<solve(s,i)<<'\n';

}