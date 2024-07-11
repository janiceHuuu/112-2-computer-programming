#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int N,M,c;
  M=66;
  c=0;
  cout<<"請輸入數字N（若答錯次數較少會有驚喜）：";
  cin>>N;
  while(N!=M){
    if (N>M){
      cout<<"比答案大，";
    }      
    else{
      cout<<"比答案小，";
    }     
    cout<<"請輸入數字N：";
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
    cout<<"恭喜你回答正確！！"<<endl;
    cout<<"共回答錯誤"<<c<<"次"<<endl;
    if(c<5){
      cout<<"你是百年難得一見的奇才！！"<<endl<<endl;
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
