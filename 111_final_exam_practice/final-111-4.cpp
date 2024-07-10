#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

bool win(string c[0][3]);

int main() {
  int n;
  string a,c[3][3];
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>a;
      for(int k=0;k<3;k++){
        c[j][k]=a[k];
      }
    }
    int b=1;
    int count=0;
    for(int r=1;r<10;r++){
      for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
          while(c[j][k]==to_string(r) && b==1){
            c[j][k]="_";
            if(win(c)==true){
              count++;
              cout<<count<<endl;
              b=0;
            }
            else{
              count++;
            }
          }
        }
      }
    }
    
  }
  return 0;
}

bool win(string C[3][3]){
  //判別勝負
  for(int i=0;i<3;i++){
    //判別橫向連線
      if(C[i][0]==C[i][1]){
        if(C[i][1]==C[i][2]){
          return true;
        }
      }

    //判別直向連線
      if(C[0][i]==C[1][i]){
        if(C[1][i]==C[2][i]){
          return true;
        }
      }
  }
  //判別斜連線
  
    if(C[0][0]==C[1][1]){
      if(C[1][1]==C[2][2]){
        return true;
      }
    }
    if(C[0][2]==C[1][1]){
      if(C[1][1]==C[2][0]){
        return true;
      }
    }
  return false;
}