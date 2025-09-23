// Bacic implementation of queue
#include <stdio.h>
#define size 12
int arr[size], rear = -1, front = -1;
void enQueue(int x)
{
    if (rear < size - 1)
    {
        rear++;
        arr[rear] = x;
        if (front == -1)
        {
            front++;
        }
    }
    else
    {
        printf("Queue is Empty...");
    }
}
void deQueue()
{
    if (front > -1)
    {
        arr[front] = '\0';
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
    else
    {
        printf("Queue is Full...");
    }
}
void traverse()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
}








// Double Ended Queue

#include <stdio.h>
#define size 13
int arr[size],front=-1,rear=-1;
void enQueue(int x){
    if(rear < size-1){
        rear++;
        arr[rear]=x;
        if(front ==-1){
            front++;
        }
    }
    else{
        printf("Queue is full...");
    }
}

void deQueue(){
    if(front>-1){
        printf("From where do you want to remove");
        printf("\n Press 1 for Front OR 2 for Rear");
        int x;
        scanf("%d",&x);
        if(x==1){
            arr[front]='\0';
            front++;
            if(front>rear){
                front=rear=-1;
            }
        }
        else{
            arr[rear]='\0';
            rear--;
            if(rear<front){
                front=rear=-1;
            }
        }
    }
    else{
        printf("Queue is Empty...");
    }
}



void tarverse(){
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int num;
    while (num!=1){
        printf("************ Double Ended Queue ************");
        printf("2 For enQueue");
        printf("3 For deQueue");
        scanf("%d",&num);
        switch (num)
        {
            case  2:
                int val ;
                scanf("%d",&val);
                enQueue(val);
                break;
            case 3:
                deQueue();
            break;
        }
    }
}

