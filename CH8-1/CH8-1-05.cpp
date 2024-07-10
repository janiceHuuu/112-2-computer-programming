#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int n,m,sum;
  int s[20][20];
  sum=0;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>s[i][j];
    }
  }
  for(int k=0;k<m;k++){
    for(int r=0;r<n;r++){
      sum+=s[r][k];
    }
    cout<<sum<<endl;
    sum=0;
  }
  return 0;
}