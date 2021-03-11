#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b;
       if(b>a) {
                c=b;
                b=a;
                a=c;
                }
        if((2*b-a)%3==0&&(2*b-a)>=0) cout<<"YES\n";
        else cout<<"NO\n";
    }

 }
