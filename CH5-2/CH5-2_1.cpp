#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  int b=2;
  while(cin>>n){
    for(int i=1;i<n;i++){
      b=b*2;
    }
    cout<<"2^"<<n<<"="<<b<<endl;
    b=2;
  }
  return 0;
}
