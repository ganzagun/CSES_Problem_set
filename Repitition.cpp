#include<bits/stdc++.h>

using namespace std;

int main(){
string s;
cin>>s;
int n= s.length() ,ans=1,m=1;
for(int i=1;i<n;i++){
   if(s[i]==s[i-1]){
       m=1;
       while(s[i]==s[i-1]&&i<n){
           m++;
           i++;
       }
       ans = max(m,ans);
   }
}
cout<<ans;
}