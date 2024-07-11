#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int a;
  int b;
  float c;
  float d;
  float e;
  float f;
  cin>>a>>b;
  c=(float)a/b;
  d=c+1;
  e=c-a/b;
  f=d-!e;
  cout<<(int)f;
  return 0;
}