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

  //CALCULATING AND PRINTING THE SUMMATION
  int sum=0;
  for(int i=0;i<size;i++)sum+=arr[i];
  printf("Summation Of All Array Element: %d",sum);



  return 0;
}