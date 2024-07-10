#include <iostream>
#include <cstdlib>
using namespace std;
int digtal(int m);
int main() {
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    cout<<digtal(m)<<endl;
  }
  return 0;
}

int digtal(int m){
  int a=10,b=1;
  while(a>=10 && m>=10){
    a=m/10;
    m/=10;
    b+=1;
    //cout<<b<<endl;
  }
  return b;
}