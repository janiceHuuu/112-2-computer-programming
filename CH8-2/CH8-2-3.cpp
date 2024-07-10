#include <iostream>
#include <cstdlib>
using namespace std;
int mid3(int arr[],int m);

int main() {
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    int arr[1000];
    for(int j=0;j<m;j++){
      cin>>arr[j];
    }
    cout<<mid3(arr,m)<<endl;
  }
  return 0;
}

int mid3(int arr[],int m){
  int temp;
  for(int j=0;j<m;j++){
    for(int k=0;k<m-1;k++){
      if(arr[k]>arr[k+1]){
        temp=arr[k+1];
        arr[k+1]=arr[k];
        arr[k]=temp;

      }
    }
  }
  return arr[m/2];
}