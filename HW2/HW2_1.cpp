#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int N,M,c;
  M=66;
  c=0;
  cout<<"�п�J�ƦrN�]�Y�������Ƹ��ַ|����ߡ^�G";
  cin>>N;
  while(N!=M){
    if (N>M){
      cout<<"�񵪮פj�A";
    }      
    else{
      cout<<"�񵪮פp�A";
    }     
    cout<<"�п�J�ƦrN�G";
    c++;
    cin>>N;
  }
  int n;
  n=12-c;
  if(n>1){
    for(int i=1;i<n;i++){
      for(int r=n-i;r>0;r--){
        cout<<" ";
      }
      for(int a=2*i-1;a>0;a--){
        cout<<"*";		
      }
      cout<<endl;
    }
    for(int b=0;b<n;b++){
      for(int c=b;c>0;c--){
        cout<<" ";
      }
      for(int d=2*n-1-2*b;d>0;d--){
        cout<<"*";
      }
      cout<<endl;
    }
    cout<<"���ߧA�^�����T�I�I"<<endl;
    cout<<"�@�^�����~"<<c<<"��"<<endl;
    if(c<5){
      cout<<"�A�O�ʦ~���o�@�����_�~�I�I"<<endl<<endl;
      cout<<"**        **        **"<<endl;
      cout<<"***       ***       ***"<<endl;
      cout<<"******    ******    ******"<<endl;
      cout<<"******    ******    ******"<<endl;
      cout<<"******    ******    ******"<<endl;
      cout<<"******    ******    ******"<<endl;
    }
  }
  return 0;
}
