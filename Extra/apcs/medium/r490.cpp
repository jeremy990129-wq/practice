#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int n;
    cin>>n;
    vector<int> t(1000,0);
    while(n--){
        string a;
        cin>>a;
        int so=0;
        int se=0;
        for(int i=0;i<12;i++){
            if(i%2){
                se+=(a[i]-'0');
            }else{
                so+=(a[i]-'0');
            }
        }
        int b=(a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0');
        if((so+3*se)%10+(a[12]-'0')==0 || (so+3*se)%10+(a[12]-'0')==10){
            t[b]++;
        }
    }
    if((max_element(t.begin(),t.end())-t.begin())/100==0){
        cout<<'0'<<max_element(t.begin(),t.end())-t.begin()<<" "<<*max_element(t.begin(),t.end())<<'\n';
        return 0;
    }
    cout<<max_element(t.begin(),t.end())-t.begin()<<" "<<*max_element(t.begin(),t.end())<<'\n';
}