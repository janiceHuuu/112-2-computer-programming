#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  char s[100];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    int a=0,j=0;
    while(a==0){
      if(s[j]=='\0'){
        cout<<j<<endl;
        a++;
      }
      else{
        j++;
      }
    }  
  }
  return 0;
}