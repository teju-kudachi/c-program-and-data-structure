#include <stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp = fopen("Poorvi99.txt", "a");
  fputc("a",fp);
  fputs("hello",fp);
  return 0;
}
  