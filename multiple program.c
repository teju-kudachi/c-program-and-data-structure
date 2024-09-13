#include <stdio.h>
#include<stdlib.h>
#define MAXSIZE 50
int array[MAXSIZE];
int size = 0;
void display(){
    int i;
    if(size == 0){
        printf("Array is empty\n");
    }else{
      for (i=0; i<size; i++){
        printf("%d ",array[i]);
      }
      printf("\n");
    }
}
void insert(int position, int element){

    int i;
    for(i= size ; i>=position; i--){
        array[i+1] = array[i];
    }
    array[position] = element;
    size++;
}
void deleteAtPosition(int position){
    int i;
    for(i=position; i<size-1; i++){
        array[i] = array[i+1];
    }
    size--;
}
int main(){
  while (1){
    printf("1. Insert END\n");
    printf("2. Insert  specified POSITION\n");
    printf("3. Delete  specified POSITION\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    int choice;
    int position;
    int element;
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
      case 1:
      if(size==MAXSIZE){
        printf("Array is full\n");
        break;
      }
      printf("Enter the element to be inserted: ");
      scanf("%d",&element);
      array[size]=element;
      size++;
      break;
      case 2:
      if(size==MAXSIZE){
        printf("Array is full\n");
        break;
      }
        printf("enter the position: ");
        scanf("%d",&position);
        if(position<0 ){
          printf("Invalid position\n");
          break;
        }
        case3:
        if(size==0){
          printf("Array is empty\n");
          break;
        }
        printf("enter the position to delete: ");
        scanf("%d",&position);
        if(position<0 || position>=size){
          printf("Invalid position\n");
          break;
          
        }
          deleteAtPosition(position);
          break;
        case 4:
        display();
        break;
        case 5:
        exit(0);
          default:
            printf("invalid choice\n");
    }
  }
  return 0;
}
        

  
          
          
        
      