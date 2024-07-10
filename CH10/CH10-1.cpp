#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() {
  int n;
  char s[101],*p;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    p=&s[0];
    int l,sum=0;
    l=strlen(s);
    for(int j=0;j<l;j++){
      if(*(p+j)>=65 && *(p+j)<=90){
        sum++;
      }
      else if(*(p+j)>=97 && *(p+j)<=122){
        sum++;
      }
    }
    
    cout<<sum<<endl;
  }
  return 0;
}