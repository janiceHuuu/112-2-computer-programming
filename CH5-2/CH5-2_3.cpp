#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  while(cin>>n){
    for(int i=1;i<(n+1);i++){
      if(n%i==0){
        cout<<i<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
