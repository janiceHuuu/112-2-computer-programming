#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
  int n,a,length,first,second,third,s[100];
  string b;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<100;j++){
      s[j]=0;
    }
    first=0;
    second=0;
    third=0;
    (cin>>a).get();
    getline(cin,b);
    length=b.length();
    for(int j=0;j<length;j++){
      if(b[j]>=49 && b[j]<=51){
        first++;
      }
      else if(b[j]>=52 && b[j]<=53){
        second++;
      }
      else if(b[j]>=54 && b[j]<=57){
        third++;
      }
    }
    //cout<<"first="<<first<<endl;
    //cout<<"second="<<second<<endl;
    //cout<<"third="<<third<<endl;
    //cout<<"i="<<i<<endl;
    //cout<<"a="<<a<<endl;
    int c=0;
    while(a>0){
      if(b[c]>=49 && b[c]<=51 && s[c]!=1){
        s[c]=1;
        a--;
        first--;
      }
      else if(b[c]>=52 && b[c]<=53 && first==0 && s[c]!=1){
        s[c]=1;
        a--;
        second--;
      }
      else if(b[c]>=54 && b[c]<=57 && first==0 && second==0 && s[c]!=1){
        s[c]=1;
        a--;
        third--;
      }
      else{
        s[c]=(s[c]==1?1:0);
      }
      c++;
      if(c==length){
        c=0;
      }
    }
    for(int j=0;j<length;j++){
      if(s[j]==1){
        cout<<"Y";
      }
      else{
        cout<<"N";
      }
    }
    cout<<endl;
  }
  return 0;
}