#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float x;
  float y;
  scanf("%f",&x);
  scanf("%f",&y);
  
  if(x==0 && y==0){
    printf("(%f,%f)在原點",x,y);
  }
  else if(x==0 && y!=0){
    printf("(%f,%f)在Y軸上",x,y);
  }
  else if(x!=0 && y==0){
    printf("(%f,%f)在X軸上",x,y);
  }
  else if(x>0 && y>0){
    printf("(%f,%f)在第一象限",x,y);
  }
  else if(x<0 && y>0){
    printf("(%f,%f)在第二象限",x,y);
  }
  else if(x<0 &&y<0){
    printf("(%f,%f)在第三象限",x,y);
  }
  else if(x>0 &&y<0){
    printf("(%f,%f)在第四象限",x,y);
  }
  return 0;
}
