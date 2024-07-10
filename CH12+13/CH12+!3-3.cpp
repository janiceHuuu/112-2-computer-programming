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
    int get_length(){
      return name.length();
    }
};

int main() {
  string a;
  char b;
  int n,c;
  Student stu[21];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    stu[i].data(a,b,c);
  }
  for(int i=1;i<n;i++){
    for(int r=0;r<(n-1);r++){
      if(stu[r].get_length()>stu[r+1].get_length()){
        stu[20]=stu[r];
        stu[r]=stu[r+1];
        stu[r+1]=stu[20];
      }
    }
  }
  cout<<stu[n-1].get_score()<<endl;
  cout<<stu[0].get_score()<<endl;
  return 0;
}