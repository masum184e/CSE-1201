#include<stdio.h>
int partition(int A[], int low, int high){
  int i,j,t,pivot=A[high];
  for(i=low-1,j=low;j<high;j++){
    if(A[j]<=pivot){
      i++;
      t=A[j];
      A[j]=A[i];
      A[i]=t;
    }
  }
  t=A[i+1];
  A[i+1]=A[high];
  A[high]=t;
  
  return i+1;
}
void quick_sort(int A[], int low, int high){
  if(low>=high)return;
  int p=partition(A,low,high);
  quick_sort(A,low,p-1);
  quick_sort(A,p+1,high);
}

int main(){
  int size=10;
  int A[]={5,4,10,2,1,3,9,8,7,6};
  quick_sort(A,0,size-1);
  for(int i=0;i<size;i++)printf("%d ",A[i]);

  return 0;
}