#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float x;
  float y;
  scanf("%f",&x);
  scanf("%f",&y);
  
  if(x==0 && y==0){
    printf("(%f,%f)�b���I",x,y);
  }
  else if(x==0 && y!=0){
    printf("(%f,%f)�bY�b�W",x,y);
  }
  else if(x!=0 && y==0){
    printf("(%f,%f)�bX�b�W",x,y);
  }
  else if(x>0 && y>0){
    printf("(%f,%f)�b�Ĥ@�H��",x,y);
  }
  else if(x<0 && y>0){
    printf("(%f,%f)�b�ĤG�H��",x,y);
  }
  else if(x<0 &&y<0){
    printf("(%f,%f)�b�ĤT�H��",x,y);
  }
  else if(x>0 &&y<0){
    printf("(%f,%f)�b�ĥ|�H��",x,y);
  }
  return 0;
}
