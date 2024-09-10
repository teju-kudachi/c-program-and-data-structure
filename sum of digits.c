#include <stdio.h>

int main(void) {
int i=1,factorial=1,num;
printf("enter a number");
  scanf("%d",&num);
  do
    {
      factorial=factorial*i;
      i++;
    }
    while(i<=num);
       printf("factorial of %d is %d",num,factorial);
}
  
  
     
  
  

  
  
  