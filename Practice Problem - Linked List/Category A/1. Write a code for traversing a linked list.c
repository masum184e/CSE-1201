#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node{
  int data;
  Node *next;
};
Node *create_node(Node *next,int item){
  Node *new_node=(Node *)malloc(sizeof(Node));
  if(new_node==NULL){
    printf("Error Could Not Create A New Node\n");
    exit(1);
    }
  new_node->data=item;
  new_node->next=next;
  return new_node;
}
Node *prepend(Node *head,int item){
  Node *new_node=create_node(head,item);
  return new_node;
}
Node *append(Node *head,int item){
  Node *new_node=create_node(NULL,item);
  if(head==NULL)return new_node;
  Node *current_node=head;
  while(current_node->next!=NULL)current_node=current_node->next;
  current_node->next=new_node;
  return head;
}
//TRAVERSING - PRINTING
void traversing(Node *head){
  Node *current_node=head;
  while(current_node!=NULL){
    printf("%d ",current_node->data);
    current_node=current_node->next;
  }
}
int main(){
  Node *head=NULL;
  head=prepend(head,1);
  append(head,2);
  append(head,3);
  append(head,4);
  append(head,5);

  traversing(head);
  
  return 0;
}