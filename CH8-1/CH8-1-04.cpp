#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
  int n,m,sum;
  sum=0;
  cin>>n>>m;
  int s[20][20];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>s[i][j];
      sum+=s[i][j];
    }
    cout<<sum<<endl;
    sum=0;
  }
  
  return 0;
}