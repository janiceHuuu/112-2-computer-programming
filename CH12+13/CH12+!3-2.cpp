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
  Student stu[20];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    stu[i].data(a,b,c);
    if(stu[i].get_gender()=='F'){
      if(stu[i].get_score()<60){
        j++;
      }
    }
    else{
      if(stu[i].get_score()<60){
        k++;
      }
    }
  }
  cout<<j<<endl;
  cout<<k<<endl;
  return 0;
}