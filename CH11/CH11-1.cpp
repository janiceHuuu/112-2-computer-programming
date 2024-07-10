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
  int n,f_max=0,m_max=0;
  string f_answer,m_answer;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>student[i].name>>student[i].sex>>student[i].score;
    if(student[i].sex=='F'){
      if(student[i].score>f_max){
        f_max=student[i].score;
        f_answer=student[i].name;
      }
    }
    else{
      if(student[i].score>m_max){
        m_max=student[i].score;
        m_answer=student[i].name;
      }
    }  
  }
  cout<<f_answer<<endl<<m_answer<<endl;
  return 0;
}