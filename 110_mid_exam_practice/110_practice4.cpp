#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n,m,l,a,b,c[11],d[11],e;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		l=1;
		a=0;
		b=1;
		e=1;
		while (a==0){
			if(m/l<10){
				a++;
			}
			else{
				b++;
				l*=10;
			}
		}
		//把一串數字的各個數字存在一陣列 
		for(int j=0;j<b;j++){
			if(j>0){
				c[j]=m/l-d[j-1];
			}
			else{
				c[j]=m/l;
			}
			d[j]=m/l*10;
			l/=10;
			//cout<<"c["<<j<<"]="<<c[j]<<endl;	
		}
		
		int sum=0;
		for(int j=0;j<b/2;j++){
			if(c[j]!=c[b-1]){
				sum+=1;
				b--;
			}
			else{
				b--;
			}
		}
		sum>=1?cout<<"No"<<endl:cout<<"Yes"<<endl;
	}
	return 0;
}
