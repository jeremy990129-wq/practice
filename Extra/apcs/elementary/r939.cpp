#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    fastio;
    vector<int> v(6);
    v[0]=1;
    v[2]=2;
    v[5]=1;
    int A=0;
    int B=0;
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            if(a==2&&b==2){
                A-=2;
                B-=2;
            }
            continue;
        }
        
        char w;
        if(a==0){
            if(b==2){
                w='a';
            }else if(b==5){
                w='b';
            }
        }else if(a==2){
            if(b==5){
                w='a';
            }else if(b==0){
                w='b';
            }
        }else if(a==5){
            if(b==0){
                w='a';
            }else if(b==2){
                w='b';
            }
        }
        if(w=='a'){
            A+=v[a];
            B-=v[b];
        }else{
            A-=v[a];
            B+=v[b];
        }    
    }
    cout<<A<<" "<<B<<'\n';
}