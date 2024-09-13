#include <stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp = fopen("Poorvi99.txt", "r");
  fgets(c,11,fp);
  printf("str is %s\n", c);
  fclose(fp);
  return 0;
}
  