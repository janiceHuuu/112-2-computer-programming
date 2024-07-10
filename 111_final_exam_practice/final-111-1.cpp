#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main(){
  int n;
  float hour,minute,angle;
  string time;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>time;
    hour=float(((int(time[0])-48)*10+(int(time[1])-48))*30);
    //cout<<"hour="<<hour<<endl;
    minute=float(((int(time[3])-48)*10+(int(time[4])-48))*6);
    
    hour+=0.5*(float(((int(time[3])-48)*10+(int(time[4])-48))));
    //cout<<"minute="<<minute<<endl;
    
    if(hour>minute){
      angle=hour-minute;
    }
    else{
      angle=minute-hour;
    }
    if(angle>180){
      angle=360-angle;
    }
    printf("%.1f\n",angle);
  }
  
  return 0;
}