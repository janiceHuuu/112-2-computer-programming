#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c, d, e;
  scanf("%d",&a);
  b=a/1000;  //�ĥ|��Ʀr
  c=(a-b*1000)/100;  //�ĤT��Ʀr
  d=(a-b*1000-c*100)/10;  //�ĤG��Ʀr
  e=a-b*1000-c*100-d*10;  //�Ĥ@��Ʀr
  
  if(b*c*d*e != 0){  //�|��Ʀr�Ҥ����s�����p
    printf("%d�d%d��%d�Q%d",b,c,d,e);
  }
  
  if(c==0){
    if(d*e !=0){  //�u���ĤT��Ʀr���s�����p
      printf("%d�d�s%d�Q%d",b,d,e);
    }
    if(d==0 & e!=0){  //�ĤT��M�ĤG��Ʀr���s�����p
      printf("%d�d�s%d",b,e);
    }
    if(d!=0 & e==0){  //�ĤT��M�Ĥ@��Ʀr���s�����p
      printf("%d�d�s%d�Q",b,d);
    }
    if(d==0 & e==0){  //�u���ĥ|��Ʀr�����s�����p
      printf("%d�d",b);
    }
  }
  
  if(c!=0 && d*e==0){
    if(d==0 && e!=0){  //�u���ĤG��Ʀr���s�����p
      printf("%d�d%d�ʹs%d",b,c,e);
    }
    if(d!=0 && e==0){  //�u���Ĥ@��Ʀr���s�����p
      printf("%d�d%d��%d�Q",b,c,d);
    }
    if(d==0 && e==0){  //�ĥ|��M�ĤT��Ʀr�����s�����p
      printf("%d�d%d��",b,c);
    }
  }
  
  return 0;
}
