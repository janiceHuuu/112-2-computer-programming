#include <iostream>
#include <cstdlib>
using namespace std;
int mid1(int a, int b, int c);

int main() {
  int n,a,b,c;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    cout<<mid1(a,b,c)<<endl;
  }
  return 0;
}

int mid1(int a, int b, int c){
  int e,d[3]={a,b,c};
  for(int k=0;k<3;k++){
    for(int j=0;j<2;j++){
      if(d[j]>d[j+1]){
        e=d[j+1];
        d[j+1]=d[j];
        d[j]=e;
      }
    }
  }
  return d[1];
}