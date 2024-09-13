#include <stdio.h>
struct book{
int num;
char name[10];
float price;
};
int main()
{
  struct book hp;
  hp.num=123;
  hp.price=1.234;
  strcpy(hp.name,"Harry Potter");
  printf("book number is %d\n",hp.num);
  printf("book name is %s\n",hp.name);
  printf("book price is %f\n",hp.price);
  return 0;
}



