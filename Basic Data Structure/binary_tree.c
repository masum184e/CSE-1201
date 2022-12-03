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
Node *create_tree(){
  Node *two=create_node(2);
  Node *seven=create_node(7);
  Node *nine=create_node(9);
  add_left_child(two,seven);
  add_right_child(two,nine);
  /*
    2
  7   9
  */

  Node *one=create_node(1);
  Node *six=create_node(6);
  add_left_child(seven,one);
  add_right_child(seven,six);
  /*
      2
    7   9
  1   6
  */
  return two;
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
void in_order(Node *node){
  if(node->left!=NULL)in_order(node->left);
  printf("%d ",node->data);
  if(node->right!=NULL)in_order(node->right);
}
int main(){
  Node *root=create_tree();
  
  printf("Binary Tree Pre Order Traverse  : ");
  pre_order(root);
  printf("\n");

  printf("Binary Tree Post Order Traverse : ");
  post_order(root);
  printf("\n");

  printf("Binary Tree In Order Traverse   : ");
  in_order(root);
  printf("\n");
  
  return 0;
}
