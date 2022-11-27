#include<stdio.h>
void bubble_sort(int A[],int size){
  int tmp;
  for(int i=0;i<size;i++){
    for(int j=0;j<size-i-1;j++){
      if(A[j]>A[j+1]){
        tmp=A[j];
        A[j]=A[j+1];
        A[j+1]=tmp;
      }
    }
  }
}
int main(){

  int A[]={1,2,3,4,5,6,7,8,9,0};
  bubble_sort(A,10);
  for(int i=0;i<10;i++)printf("%d ",A[i]);
  
  return 0;
}
