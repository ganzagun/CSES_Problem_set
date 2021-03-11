#include<bits/stdc++.h>

using namespace std;

 set<string> p;

void permutation(string s,set<string> & p,int n,string per,bool check[]){
  if(per.size()==n){
      p.insert(per);
  }
  else{
      for(int i=0;i<n;i++){
          if(check[i]) continue;
          check[i]=true;
          per.push_back(s[i]);
          permutation(s,p,n,per,check);
          check[i]=false;
          per = per.substr(0,per.size()-1);
      }
  }

}
void permutation_print(string s,int n){
p.clear();
string per;
bool check[n]={false};
 permutation(s,p,n,per,check);
 cout<<p.size()<<"\n";
set<string>::iterator it =p.begin();
while (it != p.end())
{
    cout << (*it) << "\n";
    it++;
}

}
int main(){

int n;
string s;
cin>>s;
n = s.length();

permutation_print(s,n);


}
