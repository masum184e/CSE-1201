#include<stdio.h>
int binary_search(int A[], int size, int search){
  int left,right,mid;
  left=0;
  right=size-1;
  while(left<=right){
    mid=(left+right)/2;
    if(A[mid]==search)return mid;
    if(A[mid]<search)left=mid+1;
    else right=mid-1;
  }
  return -1;
}
int main(){
  int size=10,search=0;
  int A[]={0,1,2,3,4,5,6,7,8,9};

  int result=binary_search(A,size,search);

  if(result==-1){
    printf("Item Not Found");
  } else{
    printf("Item Found");
  }
  return 0;
}
