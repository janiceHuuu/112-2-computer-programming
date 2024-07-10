#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int m,i,MAX,min;
  int s[20];
  MAX=0;
  min=1000;
  cin>>m;
  for(i=0;i<m;i++){
    cin>>s[i];
    if(s[i]>MAX){
      MAX=s[i];
    }
    if(s[i]<min){
      min=s[i];
    }
  }
  cout<<min<<" "<<MAX<<endl;
  
  return 0;
}