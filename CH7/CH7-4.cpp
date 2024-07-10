#include <iostream>
#include <cstdlib>
using namespace std;
bool isPrime(int m);

int main() {
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    if(isPrime(m)==true){
      cout<<"yes"<<endl;
    }
    else{
      cout<<"no"<<endl;
    }
  }
  return 0;
}

bool isPrime(int m){
  int a=0,b=m-1,c=0;
  bool d;
  if(b==0){
    d=false;
  }
  else{
    while(a==0 && c==0){
      if(b==1){
        c+=1;
        d=true;
      }
      else if(m%b==0){
        a+=1;
        d=false;
      }
      else{
        b--;
      }
    }
  }
  //cout<<a<<"c="<<c<<endl;
  return d;
}