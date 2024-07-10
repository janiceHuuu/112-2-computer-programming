#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
  int n,c[5];
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<5;j++){
      cin>>c[j];
    }
    for(int j=1;j<5;j++){
      for(int k=0;k<5-j;k++){
        if(c[k]>c[k+1]){
          int temp;
          temp=c[k];
          c[k]=c[k+1];
          c[k+1]=temp;
        }
      }
    }
    if(c[4]-c[3]==1 && c[3]-c[2]==1 && c[2]-c[1]==1){
      if(c[1]-c[0]==1){
        cout<<"Yes"<<endl;
      }
      else if(c[1]==10 && c[0]==1){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }
    else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}

