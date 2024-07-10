#include <iostream>
#include <cstdlib>
using namespace std;
int mid2(int arr[]);

int main() {
  int n,a,b,c,d,e,arr[5];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c>>d>>e;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    cout<<mid2(arr)<<endl;
  }
  return 0;
}

int mid2(int arr[]){
  int temp;
  for(int j=0;j<5;j++){
    for(int k=0;k<4;k++){
      if(arr[k]>arr[k+1]){
        temp=arr[k+1];
        arr[k+1]=arr[k];
        arr[k]=temp;
        
      }
    }
  }
  return arr[2];
}