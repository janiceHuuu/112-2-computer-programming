#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX(a,b,c) (((a>b?a:b)>c)?(a>b?a:b):c)

int main() {
  int n,a,b,c;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    cout<<MAX(a,b,c)<<endl;
  }
  return 0;
}