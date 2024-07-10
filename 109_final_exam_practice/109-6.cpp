#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
bool test(string C[0][3]);

int main() {
  int n=0;
  string k,c[3][3];
  string s[3][3];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>k;
    int l=0;
    for(int j=0;j<3;j++){
      for(int r=0;r<3;r++){
        s[j][r]=k[l];
        l++;
        //cout<<"j="<<j<<endl;
        //cout<<"r="<<r<<endl;
        //cout<<"s[j][r]="<<s[j][r]<<endl;
      }
    }
    //cout<<s;
    int c=0;
    string comp[9]={"1","2","3","4","5","6","7","8","9"};
    while(test(s)==0){
      for(int j=0;j<3;j++){
        for(int r=0;r<3;r++){
          if(s[j][r]==comp[c]){
            s[j][r]="o";
            if(test(s)==1){
              cout<<comp[c]<<endl;
              j=3;
              r=3;
            }
            c++;
          }
        }
      }
    }
  }
  return 0;
}

bool test(string C[3][3]){
  for(int i=0;i<3;i++){
    //判別橫向連線
    if(C[i][0]=="o"){
      if(C[i][0]==C[i][1]){
        if(C[i][1]==C[i][2]){
          return true;
        }
      }
    }
    //判別直向連線
    if(C[1][i]=="o"){
      if(C[0][i]==C[1][i]){
        if(C[1][i]==C[2][i]){
          return true;
        }
      }
    }
  }
  //判別斜連線
  if(C[1][1]=="o"){
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
  }
  return false;
}