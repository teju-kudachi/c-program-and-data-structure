#include <stdio.h>

int main(){
  int num, temp, rem, n = 0;
  int result=0;
  printf("enter an integer");
  scanf("%d", &num);
  temp = num;
  while(temp != 0){
    temp /= 10;
    ++n;
  }
  temp = num;
  while(temp != 0){
    rem = temp % 10;
    int power = 1;
    for(int i = 0; i < n; i++){
      power *= rem;
    }
    result += power;
    temp /= 10;
    
    }
  if (result == num)
    printf("%d is an armstrong number", num);
  else 
    printf("%d is not an armstrong number",num);
  return 0;
  }
    
 
  

  
  
  