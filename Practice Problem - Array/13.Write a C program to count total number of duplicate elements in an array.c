#include<stdio.h>
typedef struct map{
  int element;
  int frequency;
}freq;
int main(){

  //GETTING THE SIZE OF THE ARRAY
  int size;
  printf("Enter The Size Of The Array: ");
  scanf("%d",&size);

  //GETTING THE ELEMENT OF THE ARRAY
  int arr[size];
  printf("Enter The Value Of The Array: ");
  for(int i=0;i<size;i++)scanf("%d",&arr[i]);

  //CALCULATING FREQUENCY
  freq arr2[size];
  for(int i=0;i<size;i++){
    arr2[i].element=arr[i];
    arr2[i].frequency=0;

    for(int j=0;j<size;j++){
      if(arr2[i].element==arr[j]){
        arr2[i].frequency++;
        arr[j]=-1;
      }
    }
  }

  //COUNTING UNIQUE ELEMENT
  int count=0;
  for(int i=0;i<size;i++){
    if(arr2[i].element!=-1)count++;
  }

  //PRINTING NUMBER OF DUPLICATE ELEMENT
  printf("Number Of Duplicate Element In The Array %d",size-count);

  return 0;
}
