#include <iostream>
#include <cstdlib>
using namespace std;
bool poker(int *card);

int main() {
  int n,card[5];
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<5;j++){
      cin>>card[j];
    }
    if(poker(card)==true){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}

bool poker(int *card){
  int a=0,b=0,c=0;
  for(int k=0;k<5;k++){
    for(int r=0;r<5;r++){
      if(card[k]%card[r]==0 && card[k]/card[r]==1){
        a++;
        //cout<<"a+1"<<endl;
      }
    }
    if(a==3){
      b++;
    }
    if(a==2){
      c++;
    }
    //cout<<a<<" "<<b<<" "<<c<<endl;
    a=0;
  }
  if(b==3 && c==2){
    return true;
  }
  else{
    return false;
  }
}