#include<stdio.h>
#define Q_SIZE 5
typedef struct queue Queue;
struct queue{
  int data[Q_SIZE+1];
  int head,tail;
};
void enqueue(Queue *q, int item){
  if((q->tail+1)%(Q_SIZE+1)==q->head){
    printf("Queue Is Full");
    return;
  }
  q->data[q->tail]=item;
  q->tail=(q->tail+1)%(Q_SIZE+1);
}
int dequeue(Queue *q){
  int item;
  if(q->tail==q->head){
    printf("Queue Is Empty");
    return -1;
  }
  item=q->data[q->head];
  q->head=(q->head+1)%(Q_SIZE+1);
  return item;
}
int main(){
  Queue my_q;
  my_q.head=my_q.tail=0;
  enqueue(&my_q,1);
  enqueue(&my_q,2);
  enqueue(&my_q,3);
  printf("%d\n",dequeue(&my_q));
  printf("%d\n",dequeue(&my_q));
  printf("%d\n",dequeue(&my_q));
  printf("%d\n",dequeue(&my_q));
  return 0;
}
