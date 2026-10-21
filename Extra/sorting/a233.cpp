#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
void merge(vector<ll> &v,int left,int mid,int right){
    int l=left;
    int r=mid+1;
    vector<ll> temp;
    while(l<=mid && r<=right){
        if(v[l]<=v[r]){
            temp.push_back(v[l]);
            l++;
        }else{
            temp.push_back(v[r]);
            r++;
        }
    }
    while(l<=mid){
        temp.push_back(v[l]);
        l++;
    }
    while(r<=right){
        temp.push_back(v[r]);
        r++;
    }
    for(int i=0;i<temp.size();i++){
        v[left+i]=temp[i];
    }
}

void mergesort(vector<ll> &v,int left,int right){
    if(left >= right) return;
    int mid=(left+right)/2;
    mergesort(v,left,mid);
    mergesort(v,mid+1,right);
    merge(v,left,mid,right);
}
int main(){
    fastio;
    int n;
    cin>>n;
    vector<ll> v(n);
    for(auto &i:v)cin>>i;
    mergesort(v,0,n-1);
    for(auto &i:v)cout<<i<<" ";

}