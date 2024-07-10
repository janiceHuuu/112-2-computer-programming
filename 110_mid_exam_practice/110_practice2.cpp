#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n,m,a50,a10,a5,a1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		a50=m/50;
		a10=m%50/10;
		a5=m%50%10/5;
		a1=m%50%10%5/1;
		cout<<a50+a10+a5+a1<<endl;
	}
	return 0;
}
