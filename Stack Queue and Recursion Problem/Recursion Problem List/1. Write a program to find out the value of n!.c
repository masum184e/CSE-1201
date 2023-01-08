#include<stdio.h>
int factorial(int data){
  if(data==0)return 1;
  else return factorial(data-1)*data;
}
int main(){
  int n;
  printf("Enter A Number : ");
  scanf("%d",&n);
  printf("Value of %d! is : %d",n,factorial(n));
  return 0;
}
