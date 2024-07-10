#include <iostream>
#include<cstdlib>
using namespace std;
int number(int x);

int main() {
  int n,m[20],r1,r2;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m[i];
  }
  for(int i=0;i<n;i++){
    r2=number(m[i]);
    r1=m[i]-r2;
    cout<<r1<<"+"<<r2<<endl;
  }
  return 0;
}
int number(int x){
  int a=x-1,c;
  for(a=x-1;a>1;a--){
    c=0;
    for(int b=2;b<a;b++){
      if(a%b==0 || x-a==1){
        c++;
      }
    }
    //cout<<c<<" "<<a<<endl;
    if(c==0){
      break;
    }
  }
  return a;
}
