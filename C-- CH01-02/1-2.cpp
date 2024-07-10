#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int a;
  int b;
  int c;
  int d;
  float e;
  cin>>a>>b;
  c=a/b;
  d=a%b;
  e=(float)b/2;
  if (d<e)    
    cout<<c<<endl;
  if (d>=e) 
    cout<<c+1<<endl;
    
  return 0;
}