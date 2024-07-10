#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n,a,b,c,d,e,f,g,h;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		e=a*d+c*b;
		f=b*d;
		e>f?h=f:h=e;
		g=0;
		//cout<<h<<" "<<f<<" ";
		while (g==0){
			if(f%h==0 && e%h==0){
				//cout<<h<<" ";
				g++;
				
			}
			else{
				h--;
			}
		}
		cout<<e/h<<"/"<<f/h<<endl;	
	}
	return 0;
}
