#include<stdio.h>
int stack[5],top=0;
void push(int i){
  if(top>4){
    printf("Overflow\n");
    return;
  }
  stack[top]=i;
  top++;
  for(int i=0;i<top;i++)printf("%d ",stack[i]);
  printf("\n");
}
void pop(){
  if(top<=0){
    printf("Underflow\n");
    return;
  }
  if(top==1)printf("No output");
  top--;
  for(int i=0;i<top;i++)printf("%d ",stack[i]);
  printf("\n");
}
int main(){
  pop();
  push(1);
  pop();
  push(2);
  push(4);
  push(5);
  push(6);
  push(7);
  push(1);
  pop();

  return 0;
}
