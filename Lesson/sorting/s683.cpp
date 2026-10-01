#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

ll ans=0;
void merge(vector<ll> &v,int l,int mid,int r){
    int i=l;
    int j=mid+1;
    vector<ll> temp;
    while(i<=mid&&j<=r){
        if(v[i]<=v[j]){
            temp.push_back(v[i]);
            i++;
        }else{
            temp.push_back(v[j]);
            j++;
            ans+=mid-i+1;
        }
    }
    while(i<=mid){
        temp.push_back(v[i]);
        i++;
    }
    while(j<=r){
        temp.push_back(v[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++) {
        v[l+k] = temp[k];
    }

}

void mergesort(vector<ll> &v,int l,int r){
    if(l>=r)return;
    int mid=(l+r)/2;
    mergesort(v,l,mid);
    mergesort(v,mid+1,r);
    merge(v,l,mid,r);
}



int main(){
    fastio;
    int n;
    cin>>n;
    vector<ll> v(n);
    for(auto &i:v)cin>>i;
    mergesort(v,0,v.size()-1);
    cout<<ans;
}