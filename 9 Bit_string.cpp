#include<bits/stdc++.h>

using namespace std;

int main(){
int n,ans=1,mod = 1e9+7;
cin>>n;
while(n--){
ans = ans*2;
ans= ans%mod;
}
cout<<ans%mod;

}
