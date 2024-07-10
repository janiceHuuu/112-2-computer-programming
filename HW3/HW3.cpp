#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  while(true){
    cout<<"請輸入兩個字串P與Q："<<endl;
    char P[21], Q[21];
    cin>>P>>Q;
    //A
    cout<<"A.\t";
    cout<<P<<endl;
    
    //B
    cout<<"B.\t";
    string P2=P;
    for(int i=0;i<P2.length();i++){
      if(P2[i]>=48 && P2[i]<=57){
        cout<<P2[i];
      }
    }
    cout<<endl;
  
    //C
    cout<<"C.\t";
    cout<<P<<Q<<endl;
  
    //D
    cout<<"D.\t";
    string Q2=Q;
    for(int i=Q2.length()-1;i>=0;i--){
      cout<<Q2[i];
    }
    for(int i=P2.length()-1;i>=0;i--){
      cout<<P2[i];
    }
    cout<<endl;
    
    //E
    cout<<"E.\t";
    int number=0;
    for(int i=0;i<P2.length();i++){
      if(P2[i]>=48 && P2[i]<=57){
        number+=1;
      }
    }
    for(int i=0;i<Q2.length();i++){
      if(Q2[i]>=48 && Q2[i]<=57){
        number+=1;
      }
    }
    cout<<number<<endl;
  
    //F
    cout<<"F.\t";
    int sum=0;
    for(int i=0;i<P2.length();i++){
      if(P2[i]>=48 && P2[i]<=57){
        sum+=P2[i]-48;
      }
    }
    for(int i=0;i<Q2.length();i++){
      if(Q2[i]>=48 && Q2[i]<=57){
        sum+=Q2[i]-48;
      }
    }
    cout<<sum<<endl;
  
    //G
    cout<<"G.\t";
    char both[21];
    
    int a=0;
    for(int i=0;i<Q2.length();i++){
      for(int j=0;j<P2.length();j++){
        if(Q2[i]==P2[j]){
          cout<<P2[j];
          both[a]=P2[j];
          a++;
        }
      }
    }
    string both2=both;
    cout<<endl;
    
    //H
    cout<<"H.\t";
    int b=0;
    for(int i=0;i<P2.length();i++){
      for(int j=0;j<both2.length();j++){
        if(P2[i]!=both2[j]){
          b++;
        }
      }
      if(b==both2.length()){
        cout<<P2[i];
      }
      b=0;
    }
    cout<<endl;
  
    //I
    cout<<"I.\t";
    for(int i=0;i<P2.length();i++){
      if(P2[i]>=48 && P2[i]<=57){
        cout<<char(int(P2[i]+1));
      }
      else{
        cout<<P2[i];
      }
    }
    cout<<endl;
  
    //J
    cout<<"J.\t";
    for(int i=0;i<Q2.length();i++){
      if(Q2[i]>=65 && Q2[i]<=90){
        cout<<char(int(Q2[i]+32));
      }
      else if(Q2[i]>=97 && Q2[i]<=122){
        cout<<char(int(Q2[i]-32));
      }
      else{
        cout<<Q2[i];
      }
    }
    cout<<endl<<endl;
  }
  return 0;
}