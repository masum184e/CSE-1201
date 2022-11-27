#include<stdio.h>
int linear_search(int A[], int size, int search){
  for(int i=0;i<size;i++){
    if(A[i]==search){
      return i;
    }
  }
  return -1;
}
int main(){
  int size=10,search=10;
  int A[]={0,1,2,3,4,5,6,7,8,9};

  int result=linear_search(A,size,search);

  if(result==-1){
    printf("Item Not Found");
  } else{
    printf("Item Found");
  }
}
