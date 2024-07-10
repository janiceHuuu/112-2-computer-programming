#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  while(cin>>n){
    for(int i=1;i<101;i++){
      if(i%n==0){
        cout<<i<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
