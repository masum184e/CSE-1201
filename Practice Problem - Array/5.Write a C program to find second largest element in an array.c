#include<stdio.h>
#include<math.h>
int max(int x, int y){return (x > y) ? x : y;}
//int min(int x, int y){return (x < y) ? x : y;}
int main(){

  //GETTING THE SIZE OF THE ARRAY
  int size;
  printf("Enter The Size Of The Array: ");
  scanf("%d",&size);

  //GETTING THE ELEMENT OF THE ARRAY
  int arr[size];
  printf("Enter The Value Of The Array: ");
  for(int i=0;i<size;i++)scanf("%d",&arr[i]);

  //FINDING LARGEST ELEMENT OF THE ARRAY
  int mx=arr[0],second_mx=arr[0];
  for(int i=1;i<size;i++)mx=max(mx,arr[i]);

  //FINDING SECOND LARGEST ELEMENT OF THE ARRAY
  for(int i=0;i<size;i++)if(second_mx<arr[i] && arr[i]<mx)second_mx=arr[i];

  //PRINTING SECOND LARGEST ELEMENT
  printf("Second Maximum Element Of The Array: %d",second_mx);

  return 0;
}