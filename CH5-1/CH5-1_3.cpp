#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int month;
  scanf("%d",&month);
  switch(month){
    case 3:
    case 4:
    case 5:
      printf("�K�u\n");
      break;
    case 6:
    case 7:
    case 8:
      printf("�L�u\n");
      break;
    case 9:
    case 10:
    case 11:
      printf("��u\n");
      break;
    case 12:
    case 1:
    case 2:
      printf("�V�u\n");
      break;
  }
  return 0;
}
