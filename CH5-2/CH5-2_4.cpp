#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  float n;
  while(cin>>n){
    int sum=0;
    while(n>1){
      n=(float)n/2;
      sum+=1;
    }
    
    cout<<sum<<"คั"<<endl;
  }
  return 0;
}
