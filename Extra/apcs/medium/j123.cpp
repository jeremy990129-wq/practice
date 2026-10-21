#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main(){
    int r,c,n;
    cin>>r>>c>>n;
    vector<int> v(r,0);
    int p=0;
    int ans=0;
    while(n--){
        char a;
        int j;
        cin>>a>>j;
        if(a=='A'){
            int m=*max_element(v.begin()+j,v.begin()+j+4)+1;
            if(m<=c){
                for(int i=j;i<j+4;i++){
                    v[i]=m;
                }
                ans+=4;
            }else{
                p++;
            }
        }else if(a=='B'){
            if(v[j]+3<=c){
                v[j]+=3;
                ans+=3;
            }else{
                p++;
            }
        }else if(a=='C'){
            int m=*max_element(v.begin()+j,v.begin()+j+2)+2;
            if(m<=c){
                for(int i=j;i<j+2;i++){
                    v[i]=m;
                }
                ans+=4;
            }else{
                p++;
            }
            
        }else if(a=='D'){
            int m=max(v[j]+1,v[j+1]+3);
            if(m<=c){
                for(int i=j;i<j+2;i++){
                    v[i]=m;
                }
                ans+=4;
            }else{
                p++;
            }
        }else if(a=='E'){
            int m=max({v[j]+1,v[j+1]+2,v[j+2]+2});
            if(m<=c){
                for(int i=j;i<j+3;i++){
                    v[i]=m;
                }
                ans+=5;
            }else{
                p++;
            }
        }
    }
    cout<<r*c-ans<<" "<<p<<'\n';
}