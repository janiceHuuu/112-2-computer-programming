#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n,m,a,b,MAX,min;
  MAX=0;
  min=1000;
  cin>>n>>m;
  int s[20][20];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>s[i][j];
      if(s[i][j]>MAX){
        MAX=s[i][j];
        a=j+1;
      }
      if(s[i][j]<min){
        min=s[i][j];
        b=j+1;
      }
    }
    cout<<b<<" "<<a<<endl;
    MAX=0;
    min=1000;
  }
  
  return 0;
}