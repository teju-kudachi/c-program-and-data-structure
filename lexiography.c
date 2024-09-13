#include<stdio.h>
#include<string.h>
int main(){
  char str[100],str1[100];
  printf("enter name1");
  scanf("%s",str);
  printf("enter name2");
  scanf("%s",str1);
  int result=strcmp(str,str1);
  if(result==0){
  printf("the strings are equal");
  }else if (result<0){
    printf("%s comes before %s lexicographically.\n",str,str1);
  }else{
    printf("%s comes after %s lexicographically.\n",str,str1);
  }
  return 0;
  }
    
