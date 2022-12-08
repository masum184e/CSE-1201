#include<stdio.h>
void bubble_sort(int arr[],int size){
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
int main(){

  //GETTING THE SIZE OF THE ARRAY
  int size;
  printf("Enter The Size Of The Array: ");
  scanf("%d",&size);

  //GETTING THE ELEMENT OF THE ARRAY
  int arr[size];
  printf("Enter The Value Of The Array: ");
  for(int i=0;i<size;i++)scanf("%d",&arr[i]);

  //COUNTING NUMBER OF EVEN AND ODD ELEMENT
  int count_even=0,count_odd=0;
  for(int i=0;i<size;i++)(arr[i]%2==0)?count_even++:count_odd++;

  //CREATING EVEN AND ODD SEPARATE ARRAY
  int even[count_even],odd[count_odd];
  for(int i=0,o=0,e=0;i<size;i++){
    (arr[i]%2==0)?even[e++]=arr[i]:odd[o++]=arr[i];
  }

  //SORTING EVEN AND ODD ARRA
  bubble_sort(even,count_even);
  bubble_sort(odd,count_odd);

  //PRINTING EVEN AND ODD ARRAY
  printf("Even Number Of The Array:");
  for(int i=0;i<count_even;i++)printf(" %d",even[i]);
  printf("\nOdd Number Of The Array:");
  for(int i=0;i<count_odd;i++)printf(" %d",odd[i]);

  return 0;
}