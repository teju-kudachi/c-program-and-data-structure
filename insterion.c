#include<stdio.h>
int main(){
  int arr[5]= {1,2,3,4,5};

  int pos=2, value=10;
  for(int i=4;i>=pos;i--){
    arr[i+1]=arr[i];
  }
  arr[pos]=value;
  {
    printf("%d",arr[pos]);
  }
}
  
  

  
