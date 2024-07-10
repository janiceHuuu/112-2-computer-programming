#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
  int n;
  string s;
  char temp;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    int l;
    l=s.length();
    for(int j=1;j<l;j++){
      for(int k=0;k<(l-1);k++){
        
        if(s.at(k)>s.at(k+1)){
          temp = s.at(k);
          s.at(k) = s.at(k+1);
          s.at(k+1) = temp;
        }
      }
    }
    cout<<s<<endl;
  }
  return 0;
}