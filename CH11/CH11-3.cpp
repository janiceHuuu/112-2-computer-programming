#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct data{
string name;
char sex;
int score;
}student[20];

int main() {
  int n,max=0,min=100;
  char max_answer,min_answer;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>student[i].name>>student[i].sex>>student[i].score;
    if(student[i].name.length()>max){
      max=student[i].name.length();
      max_answer=student[i].sex;
    }
    else if(min>student[i].name.length()){
      min=student[i].name.length();
      min_answer=student[i].sex;
    }
  }
  cout<<max_answer<<endl<<min_answer<<endl;
  return 0;
}