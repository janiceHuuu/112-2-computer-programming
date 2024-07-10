#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c, d, e;
  scanf("%d",&a);
  b=a/1000;  //第四位數字
  c=(a-b*1000)/100;  //第三位數字
  d=(a-b*1000-c*100)/10;  //第二位數字
  e=a-b*1000-c*100-d*10;  //第一位數字
  
  if(b*c*d*e != 0){  //四位數字皆不為零的情況
    printf("%d千%d百%d十%d",b,c,d,e);
  }
  
  if(c==0){
    if(d*e !=0){  //只有第三位數字為零的情況
      printf("%d千零%d十%d",b,d,e);
    }
    if(d==0 & e!=0){  //第三位和第二位數字為零的情況
      printf("%d千零%d",b,e);
    }
    if(d!=0 & e==0){  //第三位和第一位數字為零的情況
      printf("%d千零%d十",b,d);
    }
    if(d==0 & e==0){  //只有第四位數字不為零的情況
      printf("%d千",b);
    }
  }
  
  if(c!=0 && d*e==0){
    if(d==0 && e!=0){  //只有第二位數字為零的情況
      printf("%d千%d百零%d",b,c,e);
    }
    if(d!=0 && e==0){  //只有第一位數字為零的情況
      printf("%d千%d百%d十",b,c,d);
    }
    if(d==0 && e==0){  //第四位和第三位數字不為零的情況
      printf("%d千%d百",b,c);
    }
  }
  
  return 0;
}
