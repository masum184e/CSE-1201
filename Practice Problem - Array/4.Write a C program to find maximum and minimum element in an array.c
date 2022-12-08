#include<stdio.h>
#include<math.h>
int max(int x, int y){return (x > y) ? x : y;}
int min(int x, int y){return (x < y) ? x : y;}
int main(){

  //GETTING THE SIZE OF THE ARRAY
  int size;
  printf("Enter The Size Of The Array: ");
  scanf("%d",&size);

  //GETTING THE ELEMENT OF THE ARRAY
  int arr[size];
  printf("Enter The Value Of The Array: ");
  for(int i=0;i<size;i++)scanf("%d",&arr[i]);

  int mx=arr[0],mn=arr[0];
  for(int i=1;i<size;i++){
    mx=max(mx,arr[i]);
    mn=min(mn,arr[i]);
  }
  printf("Minimum Element Of The Array: %d\n",mn);
  printf("Maximum Element Of The Array: %d",mx);

  return 0;
}