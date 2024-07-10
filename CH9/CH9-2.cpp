#include <iostream>
#include <cstdlib>
using namespace std;
void sumFactor(int m,int *sum);
bool isPerfect(int m);

int main() {
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    if(isPerfect(m)==true){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
    }
  return 0;
}

bool isPerfect(int m){
  int answer=0;
  sumFactor(m,&answer);
  if(m==answer){
    return true;
  }
  else{
    return false;
  }
  answer=0;
}

void sumFactor(int m,int *sum){
  for(int j=m-1;j>0;j--){
    if(m%j==0){
      *sum+=j;
    }
  }
}