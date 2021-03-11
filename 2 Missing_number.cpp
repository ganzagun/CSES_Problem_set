#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cin>>n;
int a[n]={0};
for(int i=0;i<n-1;i++){
cin>>x;
a[x-1]=1;
}
for(int i=0;i<n;i++){
    if(a[i]==0){
        cout<<i+1;
        break;
    }
}

 }
