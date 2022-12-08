#include<stdio.h>
int main(){

  //GETTING THE SIZE OF THE ARRAY
  int size;
  printf("Enter The Size Of The Array: ");
  scanf("%d",&size);

  //GETTING THE ELEMENT OF THE ARRAY
  int arr[size];
  printf("Enter The Value Of The Array: ");
  for(int i=0;i<size;i++)scanf("%d",&arr[i]);

  //COPYING
  int copy[size];
  for(int i=0;i<size;i++)copy[i]=arr[i];

  //PRINTING COPY ARRAY
  printf("Value Of Copy Array: ");
  for(int i=0;i<size;i++)printf("%d ",copy[i]);

  return 0;
}