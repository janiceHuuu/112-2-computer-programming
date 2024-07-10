#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n,m,MAX,min;
  int s[20][20];
  MAX=0;
  min=1000;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>s[i][j];
      if(s[i][j]>MAX){
        MAX=s[i][j];
      }
      if(s[i][j]<min){
        min=s[i][j];
      }
    }
    cout<<min<<" "<<MAX<<endl;
    MAX=0;
    min=1000;
  }
  
  return 0;
}