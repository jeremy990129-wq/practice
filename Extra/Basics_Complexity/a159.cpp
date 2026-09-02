#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    int n;
    cin>>n;
    while(n--){
        int ans=0;
        for(int i=0;i<4;i++){
            int a;
            cin>>a;
            for(int i=0;i<2;i++){
            ans+=a%10;
            a=a/10;
            ans+=(((a%10)*2)%10+((a%10)*2)/10);
            a=a/10;
            }
        }
        cout<<(ans%10==0? "Valid":"Invalid")<<'\n';
        
    }
}