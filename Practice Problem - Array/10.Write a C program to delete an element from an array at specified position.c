#include<stdio.h>

void remove(int arr[],int index,int size){
  for(int i=0;i<size;i++){
    if(i>=index)arr[i]=arr[i+1];
  }
}

int main(){

  //GETTING THE SIZE OF THE ARRAY
  int size;
  printf("Enter The Size Of The Array: ");
  scanf("%d",&size);

  //GETTING THE ELEMENT OF THE ARRAY
  int arr[size];
  printf("Enter The Value Of The Array: ");
  for(int i=0;i<size;i++)scanf("%d",&arr[i]);

  int del;
  printf("Enter The Index Of Removing Element: ");
  scanf("%d",&del);

  remove(arr,del,size);


  for(int i=0;i<size;i++)printf("%d ",arr[i]);


  return 0;
}