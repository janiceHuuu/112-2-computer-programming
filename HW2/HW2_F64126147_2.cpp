#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int N,M,c;
  M=8462;
  int a[4];
  c=0;
  a[0]=M/1000;
  a[1]=M/100-a[0]*10;
  a[2]=M/10-a[0]*100-a[1]*10;
  a[3]=M-a[0]*1000-a[1]*100-a[2]*10;
  cout<<"�п�J�ƦrN�]�Y�������Ƹ��ַ|����ߡ^�G";
  cin>>N;
  while(N!=M){
    int b[4];
    b[0]=N/1000;
    b[1]=N/100-b[0]*10;
    b[2]=N/10-b[0]*100-b[1]*10;
    b[3]=N-b[0]*1000-b[1]*100-b[2]*10;
    int y=0,x=0;
    for(int i=0;i<4;i++){
      if(a[i]==b[i]){
        x++;
      }
    }
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        if(a[i]==b[j]){
          y++;
        }
      }
    }
    y=y-x;
    c++;
    cout<<x<<"A"<<y<<"B"<<"�A�п�J�ƦrN�G";
    cin>>N;
  }
  cout<<"4A0B�A���ץ��T"<<endl;
  cout<<"�@�^�����~"<<c<<"��"<<endl;
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
    if(c<5){
      cout<<"�A�O�ʦ~���o�@�����_�~�I�I"<<endl;
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
