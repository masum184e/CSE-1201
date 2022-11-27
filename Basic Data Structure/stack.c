#include<stdio.h>
#define STACK_MAX 5
typedef struct stack Stack;
struct stack{
  int top;
  int data[STACK_MAX];
};
int pop(Stack *s){
  int item;
  if(s->top==0){
    printf("Stack is Empty");
    return -1;
  }else{
    s->top=s->top-1;
    item=s->data[s->top];
  }
  return item;
}
void push(Stack *s, int item){
  if(s->top<STACK_MAX){
    s->data[s->top]=item;
    s->top=s->top+1;
  }else{
    printf("Stack Is Full");
  }
}
int main(){
  Stack my_stack;
  my_stack.top=0;

  push(&my_stack,10);
  push(&my_stack,11);
  printf("%d\n",pop(&my_stack));
  printf("%d\n",pop(&my_stack));
  printf("%d\n",pop(&my_stack));



  return 0;
}
