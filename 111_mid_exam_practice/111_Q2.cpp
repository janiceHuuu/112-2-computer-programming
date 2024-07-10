#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int a,b,n,c,d,e,f;
	int max=1;
	int child,mother;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		c=a/b;
		d=a%b;
		e=!c;
		f=!d;
		int j=b;
		switch (e){
			case 0:
				cout<<c<<" ";
				break;
			case 1:
				break;
		}
		
		switch (f){
			case 0:	
				for(j=1;j<(b+1);j++){
					if(d%j==0 && b%j==0){
						if(j>max){	
							max=j;
						}
					}
				}
				child=d/max;
				mother=b/max;
				cout<<child<<"/"<<mother;
				break;
			case 1:
				break;
		}
		cout<<endl;
		max=1;
	}
	
	
	return 0;
}
