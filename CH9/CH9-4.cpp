#include <iostream>
#include <cstdlib>
using namespace std;
void rf(int *a,int *b);

int main() {
  int n,a,b;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    rf(&a,&b);
    cout<<a<<"/"<<b<<endl;
  }
  return 0;
}

void rf(int *a,int *b){
  int c=0,d=*b;
  while (c==0){
    if(d==1){
      c++;
    }
    else if(*b%d==0 && *a%d==0){
      c++;
    }
    else{
      d--;
    }
  }
  *a=*a/d;
  *b=*b/d;
}