#include<stdio.h>
#include<stdlib.h>
typedef struct node Node;
struct node{
  int data;
  Node *left;
  Node *right;
};
Node *create_node(int item){
  Node *new_node=(Node *)malloc(sizeof(Node));
  if(new_node==NULL){
    printf("Error!Memory couldn't allocate");
    exit(1);
  }
  new_node->data=item;
  new_node->left=NULL;
  new_node->right=NULL;
  return new_node;
}
void add_left_child(Node *node, Node *child){node->left=child;}
void add_right_child(Node *node, Node *child){node->right=child;}
Node *bst_insert(Node *root,Node *node){
  Node *parent_node,*current_node;
  if(root==NULL){
    root=node;
    return root;
  }
  parent_node=NULL;
  current_node=root;
  while(current_node!=NULL){
    parent_node=current_node;
    if(node->data<current_node->data)current_node=current_node->left;
    else current_node=current_node->right;
  }
  if(node->data<parent_node->data)add_left_child(parent_node,node);
  else add_right_child(parent_node,node);

  return root;
}
Node *create_tree(){
  Node *root=NULL;
  Node *fourty=create_node(40);
  Node *sixty=create_node(60);
  Node *fifty=create_node(50);
  Node *thirty_three=create_node(33);
  Node *fifty_five=create_node(55);
  Node *eleven=create_node(11);
  root=bst_insert(root,fourty);
  /*
  40
  */
  bst_insert(root,sixty);
  /*
    40
      60
  */
  bst_insert(root,fifty);
  /*
    40
      60
    50
  */
  bst_insert(root,thirty_three);
  /*
    40
 33    60
    50
  */
  bst_insert(root,fifty_five);
  /*
    40
 33    60
    50
       55
  */
  bst_insert(root,eleven);
  /*
      40
   33    60
11     50
         55
  */
}
void pre_order(Node *node){
  printf("%d ",node->data);
  if(node->left!=NULL)pre_order(node->left);
  if(node->right!=NULL)pre_order(node->right);
}
void post_order(Node *node){
  if(node->left!=NULL)post_order(node->left);
  if(node->right!=NULL)post_order(node->right);
  printf("%d ",node->data);
}
int main(){
  Node *root=create_tree();
  
  printf("Binary Search Tree Pre Order Traverse  : ");
  pre_order(root);
  printf("\n");

  printf("Binary Search Tree Post Order Traverse : ");
  post_order(root);
  printf("\n");

  return 0;
}
