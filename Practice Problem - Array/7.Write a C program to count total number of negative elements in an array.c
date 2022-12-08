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

  int negative=0;
  for(int i=0;i<size;i++)(arr[i]<0)?negative++:1;
  printf("Toatal Number Of Negative ELement In The Array: %d",negative);

  return 0;
}