#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int a;
  int b;
  scanf("%d",&a);
  switch(a){
    case 1 ... 50:
      b=a*100;
      break;
    case 51 ... 70:
      b=50*100+(a-50)*125;
      break;
    default:
      b=50*100+20*125+(a-70)*150;
  }
  printf("%d",b);
  return 0;
}
