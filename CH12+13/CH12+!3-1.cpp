#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class Student{
  private:
    string name;
    char gender;
    int score;
  public:
    void data(string n, char g, int s){
      name=n;
      gender=g;
      score=s;
    }
    string get_name(){
      return name;
    }
    char get_gender(){
      return gender;
    }
    int get_score(){
      return score;
    }
};

int main() {
  string a;
  char b;
  int n,c,j=0,k=0;
  Student stu[20],girl[21],boy[21];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    stu[i].data(a,b,c);
    if(stu[i].get_gender()=='F'){
      girl[j]=stu[i];
      j++;
    }
    else{
      boy[k]=stu[i];
      k++;
    }
  }
  for(int i=1;i<j;i++){
    for(int r=0;r<(j-1);r++){
      if(girl[r].get_score()>girl[r+1].get_score()){
        girl[20]=girl[r];
        girl[r]=girl[r+1];
        girl[r+1]=girl[20];
      }
    }
  }
  for(int i=1;i<j;i++){
    for(int r=0;r<(j-1);r++){
      if(boy[r].get_score()>boy[r+1].get_score()){
        boy[20]=boy[r];
        boy[r]=boy[r+1];
        boy[r+1]=boy[20];
      }
    }
  }
  cout<<girl[0].get_name()<<endl;
  cout<<boy[0].get_name()<<endl;
  return 0;
}