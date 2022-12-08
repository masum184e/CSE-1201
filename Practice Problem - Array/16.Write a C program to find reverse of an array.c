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

  //REVERSING
  int rev[size];
  for(int i=0,j=size-1;i<size;i++,j--)rev[i]=arr[j];

  //PRINTING REVERSE ARRAY
  printf("Reverse Of The Array:");
  for(int i=0;i<size;i++)printf(" %d",rev[i]);

  return 0;
}