#include<stdio.h>

int binary_search(int arr[],int size,int search){
  int left,right,mid;
  left=0;
  right=size-1;
  while(left<=right){
    mid=(left+right)/2;
    if(arr[mid]==search)return mid;
    if(arr[mid]<search)left=mid+1;
    else right=mid-1;
  }
  return -1;
}

int main(){
  
  //GETTING THE SIZE OF THE ARRAY
  int size;
  printf("Enter The Size Of The Array: ");
  scanf("%d",&size);

  //GETTING THE ELEMENT OF THE ARRAY
  int arr[size];
  printf("Enter The Value Of The Array with ASCENDING ORDER: ");
  for(int i=0;i<size;i++)scanf("%d",&arr[i]);

  //GETTING SEARCH ELEMENT
  int search;
  printf("Which Element Do You Want To Search?: ");
  scanf("%d",&search);

  //PRINTING INDEX
  int index=binary_search(arr,size,search);
  (index==-1)?printf("%d Is Not Found OR Given Array Element Is Not Sorted",search):printf("%d Found At Index %d",search,index);

  return 0;
}