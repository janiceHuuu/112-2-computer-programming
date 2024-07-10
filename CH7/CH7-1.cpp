#include <iostream>
#include <cstdlib>
using namespace std;
void rec(int l, int w,int &area, int &peri);

int main() {
  int n,l,w,area,peri;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>l>>w;
    rec(l,w,area,peri);
    cout<<area<<" "<<peri<<endl;
  }
  return 0;
}

void rec(int l, int w,int &area, int &peri){
  area=l*w;
  peri=2*(l+w);
}