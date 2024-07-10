#include <iostream>
#include <cstdlib>
using namespace std;

class data{
  public:
    int a;
    int b;
    int c;
};

int main() {
  int n;
  cin>>n;
  data stu[21];
  for(int i=0;i<n;i++){
    cin>>stu[i].a>>stu[i].b;
    stu[i].c=stu[i].a;
  }
  for(int i=n-1;i>-1;i--){
    for(int j=i-1;j>-1;j--){
      stu[j].c+=stu[i].b/i;
    }
  }
  for(int i=0;i<n;i++){
    cout<<stu[i].c<<endl;
  }
  return 0;
}