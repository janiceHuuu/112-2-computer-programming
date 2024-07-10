#include <iostream>
#include <cstdlib>
using namespace std;
void sumFactor(int m,int *sum);

int main() {
  int n,m,answer=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    sumFactor(m,&answer);
    cout<<answer<<endl;
    answer=0;
  }
  return 0;
}

void sumFactor(int m,int *sum){
  for(int j=m-1;j>0;j--){
    if(m%j==0){
      *sum+=j;
    }
  }
}