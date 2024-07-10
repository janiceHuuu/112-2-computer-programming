#include <iostream>
#include <cstdlib>
using namespace std;
int f(int m);

int main() {
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    cout<<f(m)<<endl;
  }
  return 0;
}

int f(int m){
  if(m>0){
    return (2*f(m-1)-5);
  }
  else
    return 3;
}