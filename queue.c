// Bacic implementation of queue
#include <stdio.h>
#define size 12
int arr[size], rear=-1,front=-1;
void enQueue(int x){
    if(rear<size-1){
        rear++;
        arr[rear]=x;
        if(front==-1)
       {
         front++;
       }
    }else{
        printf("Queue is Empty...");
    }
}
void deQueue(){
    if(front>-1){
        arr[front]='\0';
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }else{
        printf("Queue is Full...");
    }
}
void traverse(){
    for(int i=front;i<=rear;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    enQueue(123456789);
    traverse();
    enQueue(23);
    traverse();
    enQueue(13);
    traverse();
    enQueue(123);
    traverse();
    enQueue(129);
    traverse();
    enQueue(86783);
    traverse();
    deQueue();
    traverse();

}