#include<stdio.h>
int main(){
  //GETTING FIRST ARRAY
  int size1;
  printf("Enter The Size Of First Array: ");
  scanf("%d",&size1);
  int arr1[size1];
  printf("Enter The Value Of First Array: ");
  for(int i=0;i<size1;i++)scanf("%d",&arr1[i]);

  //GETTING SECOND ARRAY
  int size2;
  printf("Enter The Size Of Second Array: ");
  scanf("%d",&size2);
  int arr2[size2];
  printf("Enter The Value Of Second Array: ");
  for(int i=0;i<size2;i++)scanf("%d",&arr2[i]);

  //MERGIN TWO ARRAY
  int size3,index=0;
  size3=size1+size2;
  int merge[size3];
  for(int i=0;i<size1;i++){
    merge[index]=arr1[i];
    index++;
  }
  for(int i=0;i<size2;i++){
    merge[index]=arr2[i];
    index++;
  }

  //PRINTING MERGE ARRAY
  printf("Merge Array Element: ");
  for(int i=0;i<size3;i++)printf("%d ",merge[i]);

  return 0;
}