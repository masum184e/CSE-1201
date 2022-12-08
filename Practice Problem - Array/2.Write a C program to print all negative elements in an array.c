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

  //PRINTING ALL NEGATIVE ELEMENTS OF THE ARRAY
  printf("All Negative Elements Off The Array: ";)
  for(int i=0;i<size;i++){
    if(arr[i]<0)printf("%d ",arr[i]);
  }

  return 0;
}