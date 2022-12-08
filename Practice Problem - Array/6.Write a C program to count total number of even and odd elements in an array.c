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

  int even=0,odd=0;
  for(int i=0;i<size;i++)(arr[i]%2==0)?even++:odd++;
  printf("Total Number Of Even Element In The Array: %d\n",even);
  printf("Total Number Of Odd Element In The Array: %d",odd);


  return 0;
}