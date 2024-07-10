#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct data{
string name;
char sex;
int score;
}student[20],female[21],male[21];

int main() {
  int n,f_number=0,m_number=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>student[i].name>>student[i].sex>>student[i].score;
    if(student[i].sex=='F'){
      female[f_number]=student[i];
      f_number++;
    }
    else{
      male[m_number]=student[i];
      m_number++;
    }
  }
  
  for(int i=1;i<f_number;i++){
    for(int j=0;j<f_number-1;j++){
      if(female[j].score>female[j+1].score){
        female[20]=female[j];
        female[j]=female[j+1];
        female[j+1]=female[20];
      }
    }
  }
  for(int i=f_number-1;i>-1;i--){
    cout<<female[i].name<<" "<<female[i].sex<<" "<<female[i].score<<endl;
  }
  
  for(int i=1;i<m_number;i++){
    for(int j=0;j<m_number-1;j++){
      if(male[j].score>male[j+1].score){
        male[20]=male[j];
        male[j]=male[j+1];
        male[j+1]=male[20];
      }
    }
  }
  for(int i=m_number-1;i>-1;i--){
    cout<<male[i].name<<" "<<male[i].sex<<" "<<male[i].score<<endl;
  }
  //cout<<f_number<<" "<<m_number<<endl;
  return 0;
}