#include<stdio.h>
int binary_search(int A[], int left, int right, int search){
  int mid;
  mid=(left+right)/2;
  if(right>=left){
      if(A[mid]==search)return mid;
      if(A[mid]<search)return binary_search(A,mid+1,right,search);
      else return binary_search(A,left,mid-1,search);
  }else{
    return -1;
  }
}
int main(){
  int size=10,search=1;
  int A[]={0,1,2,3,4,5,6,7,8,9};

  int result=binary_search(A,0,size,search);

  if(result==-1){
    printf("Item Not Found");
  } else{
    printf("Item Found");
  }
  return 0;
}
