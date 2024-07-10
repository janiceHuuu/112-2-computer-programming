#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
  int n;
  char s[101],*p;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    int l=strlen(s);
    p=&s[0];
    for(int j=l-1;j>-1;j--){
      cout<<*(p+j);
    }
    cout<<endl;
  }
  return 0;
}