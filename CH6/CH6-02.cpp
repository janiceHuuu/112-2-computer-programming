#include <iostream>
#include <cstdlib>
using namespace std;
char letter(int m);

int main() {
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    cout<<letter(m)<<endl;
  }
  return 0;
}
char letter(int m){
  char a;
  a=64+m;
  return a;
}