#include<bits/stdc++.h>

using namespace std;

int main(){
long long n;
cin>>n;
int a[4]={0,6,28,96};

for(long long i =1;i<=n;i++){
long long x = i*i*(i*i-1)/2-4*(i-2)*(i-1);
cout<<x<<"\n";
}
}