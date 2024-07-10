#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct data{
string name;
char sex;
int score;
}student[21];

int main() {
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>student[i].name>>student[i].sex>>student[i].score;
  }
  for(int i=1;i<n;i++){
    for(int j=0;j<(n-1);j++){
      if(student[j].score>student[j+1].score){
        student[20]=student[j];
        student[j]=student[j+1];
        student[j+1]=student[20];
      }
    }
  }
  for(int i=(n-1);i>-1;i--){
    cout<<student[i].name<<" "<<student[i].sex<<" "<<student[i].score<<endl;
  }
  return 0;
}