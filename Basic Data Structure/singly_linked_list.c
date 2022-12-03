#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node{
  int data;
  Node *next;
};
Node  *create_node(int item,Node *next){
  //ALLOCATING MEMORY
  Node *new_node=(Node *)malloc(sizeof(Node));
  if(new_node==NULL){
    printf("Error!Memory couldn't allocate");
    exit(1);
  }

  //ALOCATING DATA
  new_node->data=item;
  new_node->next=next;
  return new_node;
}
Node *remove_node(Node *head,Node *node){
  //REMOVING FIRST NODE
  if(node==head){
    head=node->next;
    free(node);
    return node;
  }
  //REMOVING ALL NODE INCLUDING LAST EXCEPT FIRST
  Node *current_node=head;
  while(current_node!=NULL){
    if(current_node->next==node)break;
    current_node=current_node->next;
  }
  if(current_node==NULL)return head;
  current_node->next=node->next;
  free(node);
  
  return head;
}
Node *prepend(Node *head,int item){
  Node *new_node=create_node(item,head);
  return new_node;
}
void insert(Node *node,int item){
  //INSERTING NODE AFTER SPECIFIC NODE
  Node *new_node=create_node(item,node->next);
  node->next=new_node;
}
Node *append(Node *head,int item){
  Node *new_node=create_node(item,NULL);
  if(head==NULL)return new_node;
  Node *current_node=head;
  while(current_node->next!=NULL)current_node=current_node->next;
  current_node->next=new_node;
  return head;
}
void print_linked_list(Node *head){
  Node *current_node=head;
  while(current_node!=NULL){
    printf("%d ",current_node->data);
    current_node=current_node->next;
  }
}
int main(){
  Node *head=NULL;
  head=prepend(head,4); //4
  append(head,3);       //4 3
  append(head,2);       //4 3 2
  head=prepend(head,5); //5 4 3 2
  append(head,1);       //5 4 3 2 1

  print_linked_list(head);
  return 0;
}
