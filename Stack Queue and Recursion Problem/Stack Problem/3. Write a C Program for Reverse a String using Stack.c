#include<stdio.h>
#include<string.h>
#define STACK_MAX 100
typedef struct stack Stack;
struct stack{
  int top;
  char data[STACK_MAX];
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
void reverse_string(char str[]){

}
int main(){
  Stack my_stack;
  my_stack.top=0;

  char str[STACK_MAX];
  printf("Enter A String: ");
  scanf("%s",&str);
  
  for(int i=0;i<strlen(str);i++)push(&my_stack,str[i]);

  for(int i=0;i<strlen(str);i++)str[i]=pop(&my_stack);

  printf("Reverse String: %s",str);

  return 0;
}
