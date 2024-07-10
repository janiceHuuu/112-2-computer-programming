#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  char s[100];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    int j=0;
    while(s[j]!='\0'){
      if(int(s[j])>=65 && int(s[j])<=90){
        s[j]=char(int(s[j])+32);
      }
      j++;
    }
    cout<<s<<endl;
  }
  return 0;
}
