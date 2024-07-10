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
  int n,f_pass=60,m_pass=60;
  int f_answer=0,m_answer=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>student[i].name>>student[i].sex>>student[i].score;
    if(student[i].sex=='F'){
      if(student[i].score>=f_pass){
        f_answer++;
      }
    }
    else{
      if(student[i].score>=m_pass){
        m_answer++;
      }
    }  
  }
  cout<<f_answer<<endl<<m_answer<<endl;
  return 0;
}