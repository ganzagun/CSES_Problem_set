#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==2||n==3) cout<<"NO SOLUTION";
    else{
        int x;
        if(n%2==0) x = n/2;
        else x = n/2+1;
         for(int i=1;i<=n/2;i++){
          cout<<2*i<<" ";
         }
      for(int i = 0 ; i <x ; i++){
          cout<<2*i+1<<" ";
      }
     
    
    }
}
