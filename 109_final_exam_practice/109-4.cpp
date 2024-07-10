#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n,m;
  string r[21],p[100],q[100];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>r[i];
  }
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>p[i]>>q[i];
  }
  for(int i=0;i<n;i++){
    cout<<r[i]<<":";
    for(int j=0;j<m;j++){
      if(r[i]==p[j]){
        cout<<" "<<q[j];
      }
    }
    for(int j=0;j<m;j++){
      if(r[i]==q[j]){
        cout<<" "<<p[j];
      }
    }
    cout<<endl;
  }
  return 0;
}
