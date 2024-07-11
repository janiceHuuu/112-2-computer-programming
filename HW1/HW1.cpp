#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int N,M;
  cout<<"請輸入兩個正整數N與M：";
  while(cin>>N>>M){
  
    //A
    cout<<"A.\t";
    for(int i=1;i<(N+1);i++){
      cout<<"+";
    }
    for(int i=1;i<(M+1);i++){
      cout<<"-";
    }
    cout<<endl;
    
    //B
    cout<<"B.\t";
    int e=0;
    if(N<M){ //N比M小的情況
      for(int i=N;i<(M+1);i++){
        cout<<i<<" ";
        e+=1;
      }
    }
    if(N>M){ //N比M大的情況
      for(int i=M;i<(N+1);i++){
        cout<<i<<" ";
        e+=1;
    }
    }
    if(N==M){ //N和M一樣大的情況
      cout<<"N與M一樣大，兩者之間無正整數";
    }
    cout<<endl;
    
    //C
    cout<<"C.\t";
    int a=65;
    for(int i=1;i<(N+1);i++){
      char ch=a;
      cout<<ch;
      a++;
    }
    cout<<endl;
    
    //D
    cout<<"D.\t";
    int b=122;
    for(int i=1;i<(M+1);i++){
      char ar=b;
      cout<<ar;
      b--;
    }
    cout<<endl;
  
    //E
    cout<<"E.\t";
    int sum_E1=(N>M?M:N);
    int sum_E2=(N>M?M:N);
    for(int i=1;i<e;i++){
      sum_E2++;
      sum_E1=sum_E1+sum_E2;
    }
    cout<<sum_E1;
    cout<<endl;
  
    //F
    cout<<"F.\t";
    int sum_F1=0;
    int sum_F2=(N>M?M:N);
    for(int i=0;i<e;i++){
      if(sum_F2%2==0){
        sum_F1+=sum_F2;
      }
      sum_F2+=1;
    }
    cout<<sum_F1;
    cout<<endl;
  
    //G
    cout<<"G.\t";
    int sum_G1=0;
    int sum_G2=0;
    for(int i=1;i<(N+1);i++){
      sum_G1+=i;
    }
    for(int i=1;i<(M+1);i++){
      sum_G2+=i;
    }
    cout<<sum_G1-sum_G2;
    cout<<endl;
  
    //H
    cout<<"H.\t";
    int sum_H1=0;
    int r=0;
    for(int i=0;i<(M+1);i++){
      sum_H1+=r;
      r=(r>=0?(r+1):(r-1));
      r=r*(-1);
    }
    cout<<sum_H1;
    cout<<endl;
  
    //I
    cout<<"I.\t";
    for(int i=1;i<27;i++){
      if(N%i==0 && M%i==0){
        cout<<i<<" ";
      }
    }
    cout<<endl;
  
    //J
    cout<<"J.\t";
    int s=0;
    for(int i=1;i<100;i++){
      if(i%N==0 && i%M==0){
        cout<<i<<" ";
        s++;
      } 
    }
    if(s==0){
      cout<<"無小於100的公倍數";
    }
    
    cout<<endl<<endl;
    cout<<"請輸入兩個正整數N與M：";
  }
  return 0;
}
