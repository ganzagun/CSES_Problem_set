#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int n = s.length();
int a[26]={0};
for(int i=0;i<n;i++){
     a[(int)(s[i]-'A')]++;
}
if(n%2==0){
    int flag=1;
for(int i=0;i<26;i++){
  if(a[i]%2==1){
      flag=0;
      break;
  }
}
  if(flag==0) cout<<"NO SOLUTION\n";
  else{
      for(int i=0;i<26;i++){
        for(int j=0;j<a[i]/2;j++){
             cout<<(char)(i+(int)'A');
        }
      }
      for(int i=25;i>=0;i--){
        for(int j=0;j<a[i]/2;j++){
             cout<<(char)(i+(int)'A');
        }
      }

  }
}
else{
   int flag=1,f=0;
   for(int i=0;i<26;i++){
  if(a[i]%2==1&&f==1){
      flag=0;
      break;
  }
  if(a[i]%2==1&&f==0) f=i;
}
if(flag==0) cout<<"NO SOLUTION\n";
  else{
      for(int i=0;i<26;i++){
        for(int j=0;j<a[i]/2;j++){
             cout<<(char)(i+(int)'A');
        }
      }
      cout<<(char)(f+(int)'A');
      for(int i=25;i>=0;i--){
        for(int j=0;j<a[i]/2;j++){
             cout<<(char)(i+(int)'A');
        }
      }

  }
}
}
