#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n,m,a[5],b[20],c[6]={200,1000,4000,10000,40000,200000},d[2],answer=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>b[i];
  }
  for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
      if(a[i]==b[j]){
        d[i]=c[5];
      }
      else{
        if(a[i]-a[i]/10000000*10000000==b[j]-b[j]/10000000*10000000){
          d[i]=c[4];
        }
        else{
          if(a[i]-a[i]/1000000*1000000==b[j]-b[j]/1000000*1000000){
            d[i]=c[3];
          }
          else{
            if(a[i]-a[i]/100000*100000==b[j]-b[j]/100000*100000){
              d[i]=c[2];
            }
            else{
              if(a[i]-a[i]/10000*10000==b[j]-b[j]/10000*10000){
                d[i]=c[1];
              }
              else{
                if(a[i]-a[i]/1000*1000==b[j]-b[j]/1000*1000){
                  d[i]=c[0];
                }
                else{
                  d[i]=0;
                }
              }
            }
          }
        }
      }
      if(d[i]>=answer){
        answer=d[i];
        
      }
    }
    cout<<answer<<endl;
    answer=0;
  }
  return 0;
}