#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n,w,h,l,a1=0,a2=0,a3=0,answer;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l>>w>>h;
		a1=l*w;
		a2=l*h;
		a3=w*h;
		a1>a2?answer=a1:answer=a2;
		answer>a3?answer=answer:answer=a3;
		cout<<answer<<endl;
		a1=a2=a3=answer=0;
	}
	return 0;
}
