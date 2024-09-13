#include<stdio.h>
#include<string.h>
int main(){
  char str[100],str1[100];
  printf("enter name1");
  scanf("%s",str);
  printf("enter name2");
  scanf("%s",str1);
  strcat(str,str1);
  printf("%s",str);

}
  