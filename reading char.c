#include <stdio.h>
int main(){
  FILE *fp;
  char c;
  fp = fopen("Poorvi99.txt", "r");
  c=fgetc(fp);
  printf("character is %c\n", c);
  fclose(fp);
  return 0;
}
  