
#include <stdio.h>

int main(void) {
  int number;
  printf("enter any number: ");
  scanf("%d", & number);
  if (number > 0) {
    printf("the number is positive",number);
  } else if (number< 0){
    printf("the number is negative",number);
  } else{
    printf("the number is zero",number);
  }
  return 0;
}
