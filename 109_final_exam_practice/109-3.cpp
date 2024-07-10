#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n,m,a[21][21],u=0,d=0;
  cin>>n;
  for(int i=0;i<n;i++){
    u=0;
    d=0;
    cin>>m;
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
    for(int r=0;r<m-2;r++){
      if(a[i][r+1]-a[i][r]>0 && a[i][r+2]-a[i][r+1]<0){
        u++;
      }
      if(a[i][r+1]-a[i][r]<0 && a[i][r+2]-a[i][r+1]>0){
        d++;
      }
    }
    if(a[i][m-1]-a[i][m-2]>0){
      u++;
    }
    else if(a[i][m-1]-a[i][m-2]<0){
      d++;
    }
    cout<<u<<" "<<d<<endl;
    
  }
  return 0;
}