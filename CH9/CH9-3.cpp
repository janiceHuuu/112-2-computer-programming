#include <iostream>
#include <cstdlib>
using namespace std;
void circle(int r,double *area, double *peri);

int main() {
  int n,r;
  double area,peri;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>r;
    if(r==0){
      area=0.00;
      peri=0.00;
  }
  else{
    circle(r,&area,&peri);
      area = int(area * 100 + 0.5) / 100.0;
      peri = int(peri * 100 + 0.5) / 100.0;
  }
  printf("%.2f %.2f\n", area, peri);
    //cout<<area<<" "<<peri<<endl;
      //cout<<a<<" "<<b<<endl;
      //cout<<double(a)/100<<" "<<double(a%100)*0.01<<endl;
  }
  return 0;
}

void circle(int r,double *area, double *peri){
  double pi=3.1416;
  *area=pi*r*r;
  *peri=2*pi*r;
}