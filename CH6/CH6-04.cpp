#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int a,int b);

int main() {
  int n,a,b;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
  }
  return 0;
}

int gcd(int a,int b){
  int c=(a>b?a:b);
  int j;
  for(j=c;j>0;j--){
    if(a%j==0 && b%j==0){
      break;
    }
  }
  return j;
}