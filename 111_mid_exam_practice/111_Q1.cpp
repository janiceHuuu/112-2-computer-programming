#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n,a,b,c,d,e,answer;
	char p,q;
	
	cin>>n;
	for(int i=0 ;i<n ;i++){
		cin>>a>>p>>b>>q>>c;
		d=(int)p;
		e=(int)q;
		if (d==42){
			if (e==42){
				answer=a*b*c;
			}
			if (e==47){
				answer=a*b/c;
			}
			if (e==43){
				answer=(a*b)+c; 
			}
			if (e==45){
				answer=(a*b)-c;
			}
		}
		if (d==47){
			if (e==42){
				answer=a/b*c;
			}
			if (e==47){
				answer=a/b/c;
			}
			if (e==43){
				answer=(a/b)+c; 
			}
			if (e==45){
				answer=(a/b)-c;
			}
		}
		if (d==43){
			if (e==42){
				answer=a+(b*c);
			}
			if (e==47){
				answer=a+(b/c);
			}
			if (e==43){
				answer=(a+b)+c; 
			}
			if (e==45){
				answer=(a+b)-c;
			}
		}
		if (d==45){
			if (e==42){
				answer=a-(b*c);
			}
			if (e==47){
				answer=a-(b/c);
			}
			if (e==43){
				answer=(a-b)+c; 
			}
			if (e==45){
				answer=(a-b)-c;
			}
		}
		cout<<answer<<endl;
	}
	return 0;
} 
