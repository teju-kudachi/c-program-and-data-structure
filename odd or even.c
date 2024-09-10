#include <stdio.h>

int main(void) {
  int number;
  printf("enter any number: ");
  scanf("%d", &number);
  if (number%2==0) {
    printf("the number is even",number);
  } else if (number%2!=0){
    printf("the number is odd",number);
  }
  return 0;
}
  


  
  
  
