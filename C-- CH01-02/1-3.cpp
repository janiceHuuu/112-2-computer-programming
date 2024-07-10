#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int a;
  int b;
  int c;
  int d;
  cin>>a>>b;
  c=a/b;
  d=a%b;
  if (d>0)
    cout<<c+1<<endl;
  if (d==0)
    cout<<c<<endl;
  return 0;
}