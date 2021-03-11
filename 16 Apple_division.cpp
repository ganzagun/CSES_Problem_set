#include<bits/stdc++.h>

using namespace std;
int main(){
long long n;
cin>>n;
long long a[n],sum=0,s=0,ans;
for(int i=0;i<n;i++) {
    cin>>a[i];
    sum+=a[i];
}
//cout<<a[0]<<"\n";
ans=sum;
for(long long i=0;i<(1<<n);i++){
s=0;
for(long long j=0;j<n;j++){
    if(i&(1<<j)) s+=a[j];
}
long long curr = abs(s-(sum-s));
ans=min(ans,curr);
//cout<<s<<"\n";
}
cout<<ans;
}
