#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main() {
  int n,length,x,y,vector;
  string str;
  cin>>n;
  for(int i=0;i<n;i++){
    x=0;
    y=0;
    vector=1;
    cin>>str;
    length=str.length();
    for(int j=0;j<length;j++){
      if(str[j]==76){
        vector++;
      }
      else if(str[j]==82){
        vector--;
      }
      else if(str[j]==70){
        if(vector%4==1){
          x++;
        }
        else if(vector%4==2){
          y++;
        }
        else if(vector%4==3){
          x--;
        }
        else if(vector%4==0){
          y--;
        }
        //cout<<"("<<x<<","<<y<<")"<<endl;
        //cout<<"vector="<<vector<<endl;
      }  
    }
    cout<<"("<<to_string(x)<<","<<to_string(y)<<")"<<endl;
  }
  
  return 0;
}