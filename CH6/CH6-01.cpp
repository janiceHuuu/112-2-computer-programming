#include <iostream>
#include <cstdlib>
using namespace std;
void print();

int main() {
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    for(int j=0;j<m;j++){
      print();
    }
    cout<<endl;
  }
  
  return 0;
}
void print(){
  cout<<"orz";
  return;
}