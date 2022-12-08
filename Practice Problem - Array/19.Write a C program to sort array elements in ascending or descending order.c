#include<stdio.h>
void bubble_sort_ascending(int arr[],int size){
  int tmp;
  for(int i=0;i<size;i++){
    for(int j=0;j<size-i-1;j++){
      if(arr[j]>arr[j+1]){
        tmp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=tmp;
      }
    }
  }
}

void bubble_sort_descending(int arr[],int size){
  int tmp;
  for(int i=0;i<size;i++){
    for(int j=0;j<size-i-1;j++){
      if(arr[j]<arr[j+1]){
        tmp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=tmp;
      }
    }
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

  //PRINTING ARRAY AS ASCENDING ORDER
  bubble_sort_ascending(arr,size);
  printf("Ascending Order Of Given Array:");
  for(int i=0;i<size;i++)printf(" %d",arr[i]);

  //PRINTING ARRAY AS DESCENDING ORDER
  bubble_sort_descending(arr,size);
  printf("\nDecending Order Of Given Array:");
  for(int i=0;i<size;i++)printf(" %d",arr[i]);

  return 0;
}