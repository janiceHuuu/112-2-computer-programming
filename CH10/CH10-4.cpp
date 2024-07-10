#include <iostream>
#include <cstdlib>
using namespace std;
void add(int,int,int &);
void sub(int,int,int &);
void mult(int,int,int &);

int main() {
  int n,a,b,answer;
  char x;
  void (*p)(int,int,int &);
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>x>>b;
    
    if(x==42){
      p=&mult;
    }
    else if(x==43){
      p=&add;
    }
    else if(x==45){
      p=&sub;
    }
    (*p)(a,b,answer);
    cout<<answer<<endl;
  }
  return 0;
}

void add(int a,int b,int &answer){
  answer=a+b;
}

void sub(int a,int b,int &answer){
  answer=a-b;
}

void mult(int a,int b,int &answer){
  answer=a*b;
}