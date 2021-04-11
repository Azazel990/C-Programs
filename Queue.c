//Program to showcase the working of the queue data structure 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define max 5
typedef struct queue
{
    int data[max];
    int front;
    int rear;
}queue;

void intialize(struct queue*);
void enqueue(struct queue*);
void dequeue(struct queue*);
void display(struct queue*);

void main()
{
    queue q;
    int c;
    
    intialize(&q);
    while(1)
    {
        printf("Please Choose an operation : \n1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\n");
        scanf("%d",&c);
        
        switch(c)
        {
            case 1 : enqueue(&q);
                break;
            case 2 : dequeue(&q);
                break;
            case 3 : display(&q);
                break;
            case 4 : exit(0);
        }
    }
}

void intialize(struct queue*q)
{
    q->front = 0;
    q->rear = -1;
}
void enqueue(struct queue*q)
{
    int num;
    
    if(q->rear==max-1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Please Enter an element : \n");
        scanf("%d",&num);
        q->rear = q->rear + 1;
        q->data[q->rear] = num;
    }
    
}


void dequeue(struct queue*q)
{
    int num;
    
    if(q->front==max)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        num = q->data[q->front];
        printf("Recent element deleted %d\n",num);
        q->front = q->front + 1;
    }
}

void display(struct queue*q)
{
    int i;
    
    printf("The current queue is : \n");
    for(i=q->front;i<=q->rear;i++)
    {
        printf("%d\n",q->data[i]);
    }
}