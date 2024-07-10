#include <iostream>
#include <cstdlib>
using namespace std;
int lcm(int a,int b);

int main() {
  int n,a,b;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
  }
  return 0;
}

int lcm(int a,int b){
  int c=0,d;
  a>b?d=a:d=b;
  while(c==0){
    if(d%a==0 && d%b==0){
      break;
    }
    else{
      d++;
    }
  }
  return d;
}