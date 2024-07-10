#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

class data{
  public:
    string city;
    float number;
    float sick;

    void set_data(string c, float n, float s){
      city=c;
      number=n;
      sick=s;
    }
    
};

int main() {
  string a,d[10]={"A", "B", "C", "D", "E", "F", "G", "H", "I","J"};
  float b,c;
  int n;
  data stu[102],answer[11];
  for(int i=0;i<10;i++){
    answer[i].set_data(d[i],0,0);
  }
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>c;
    b=float(int(a[1])-48);
    a=a[0];
    stu[i].set_data(a,b,c);
  }
  for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
      if(stu[j].city>stu[j+1].city){
        data temp=stu[j];
        stu[j]=stu[j+1];
        stu[j+1]=temp;
      }
    }
  }
  int z=0;
  float sum=0;
  stu[n+1].city="Z";
  for(int i=0;i<n-1;i++){
    if(stu[i].city==stu[i+1].city){
      z++;
      sum+=stu[i].sick;
      //cout<<stu[i].city<<endl;
      //cout<<"sum="<<sum<<endl;
      //cout<<"z="<<z<<endl;
      if(stu[i].city!=stu[i+2].city){
        for(int j=0;j<10;j++){
          if(stu[i].city==answer[j].city){
            sum+=stu[i+1].sick;
            z++;
            //cout<<"z="<<z<<endl;
            //cout<<"sum="<<sum<<endl;
            answer[j].sick=float(sum/z);
            answer[j].number=sum;
            z=0;
            sum=0;
            i++;
          }
        }
      }
    }
    else{
      for(int j=0;j<10;j++){
        if(stu[i].city==answer[j].city){
          answer[j].sick=stu[i].sick;
          answer[j].number=stu[i].sick;
        }
      }
    }
  }
  for(int i=0;i<10;i++){
    cout<<answer[i].city<<" "<<answer[i].number<<" ";
    if(answer[i].sick>0){
      printf("%.1f\n",answer[i].sick);
    }
    else{
      cout<<answer[i].sick<<endl;
    }
  }
  
  return 0;
}