/*Method	        Definition
queue::empty()	    Returns whether the queue is empty. It return true if the queue is empty otherwise returns false.
queue::size()	    Returns the size of the queue.
queue::swap()	    Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.
queue::emplace()	Insert a new element into the queue container, the new element is added to the end of the queue.
queue::front()	    Returns a reference to the first element of the queue.
queue::back()	    Returns a reference to the last element of the queue.
queue::push(g) 	    Adds the element ‘g’ at the end of the queue.
queue::pop() 	    Deletes the first element of the queue.*/

#include <stdio.h>
#include <stdlib.h>
struct Queue
{
 int size;
 int front;
 int rear;
 int *Q;
};
void create(struct Queue *q,int size)
{
 q->size=size;
 q->front=q->rear=-1;
 q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct Queue *q,int x)
{
 if(q->rear==q->size-1)
 printf("Queue is Full");
 else
 {
 q->rear++;
 q->
 Q[q->rear]=x;
 }
}
int dequeue(struct Queue *q)
{
 int x=-1;
 
 if(q->front==q->rear)
 printf("Queue is Empty\n");
 else
 {
 q->front++;
 x=q->Q[q->front];
 }
 return x;
}
void Display(struct Queue q)
{
 int i;
 
 for(i=q.front+1;i<=q.rear;i++)
 printf("%d ",q.Q[i]);
 printf("\n");
}
int main()
{
 struct Queue q;
 create(&q,5);
 
 enqueue(&q,10);
 enqueue(&q,20);
 enqueue(&q,30);
 Display(q);
 
 printf("%d ",dequeue(&q));
 return 0;
}