#include<stdio.h>
void sorting(int arr[], int size){
  int one=0,zero=0;
  for(int i=0;i<size;i++){
    (arr[i]==0)?zero++:one++;
  }
  int j=0;
  for(int i=0;i<zero;i++){
    arr[j]=0;
    j++;
  }
  for(int i=0;i<one;i++){
    arr[j]=1;
    j++;
  }
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the value of the array: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  sorting(arr,n);
  
  printf("After Sorting: ");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}
