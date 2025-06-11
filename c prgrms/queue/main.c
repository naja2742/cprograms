/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define size 5

int queue[size];
int front=-1,rear=-1;
void enqueue(int value){
    if(rear==size-1){
        printf("queue is full cannot enqueue %d\n",value);
    }else {
        if (front == -1) {
            front = 0; 
        }
        rear=rear+1;
        queue[rear]=value;
        printf("%d enqueued to queue\n",value);
    }
}
void dequeue(){
    if(front==-1||front>rear){
        printf("queue is empty!cannot dequeue\n");
        
    }else{
         printf("%d dequeued from the queue\n", queue[front]);
        front=front+1;
        
        if(front>rear){
            front=rear=-1;
        }
        }
}
void display(){
    if(front==-1||front>rear){
        printf("queue is empty\n");
    }else{
        printf("queue elements:");
        for(int i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
        printf("\n");
        
    }
}

int main()
{
    int choice,value;
    while(1){
    printf("queue operations\n");
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
    printf("enter your choice:");
    scanf("%d",&choice);
    
    if(choice==1){
        printf("enter a value to enqueue:");
        scanf("%d",&value);
        enqueue(value);
    }else if(choice==2){
        dequeue();
    }else if(choice==3){
        display();
    }else if(choice==4){
        printf("exiting the program.\n");
    }else{
        printf("invalid choice.please enter 1-4\n");
    }
    
}
    return 0;
}