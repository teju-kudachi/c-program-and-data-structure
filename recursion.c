#include<stdio.h>
int fact()
{
  printf("factorial");
  fact();
  return 5;
}
void main(){
  int c=fact();
    
  
}