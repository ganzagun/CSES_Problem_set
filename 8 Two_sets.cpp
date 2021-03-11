#include<bits/stdc++.h>

using namespace std;

int main(){
long long n;
cin>>n;
long long x=((n+1)*n)/2;
if(x%2==0){
    cout<<"YES\n";
    int a[n+1]={0};
    long long sum=0,y=x/2,f=0;
    //cout<<y<<" l\n";
    for(long long i=n;i>0;i--){
        if(y-sum>=i){
              a[i]=1;
              sum+=i;
              f++;
        }
        else{
        if(y-sum>0){
            a[y-sum]=1;
            f++;
        }   
            break;
        }
       
    }
    cout<<f<<"\n";
    for(long long i=0;i<=n;i++) {
        if(a[i]==1)cout<<i<<" ";
    }
    cout<<"\n"<<n-f<<"\n";
    for(long long i=1;i<=n;i++) {
        if(a[i]==0)cout<<i<<" ";
    }
}
else
{
    cout<<"NO";
}


}
