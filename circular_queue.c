#include<stdio.h>
int rear = -1;
int front= -1;

void store_data(int n,int x,int queue[])
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if(((rear+1)%n)==front)
    {
        printf("queue is full");
    }
    else 
    {
        rear=(rear+1)%n;
        queue[rear]=x;
    }
}

void remove_data(int queue[],int n)
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else 
    {
       printf("%d",queue[front]);
       front=(front+1)%n;
    }
} 

void printdata(int n,int queue[])
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        while(i !=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%n;
        }

        printf("%d",queue[rear]);
        printf("\n");
    }
}
int main()
{
    int n=5;
    int queue[n];

        store_data(n,10,queue);
        store_data(n,70,queue);
        store_data(n,30,queue);
        store_data(n,110,queue);
        store_data(n,160,queue);

        printdata(n,queue);

         printf("deleted data is:");
         remove_data(queue,n);
         remove_data(queue,n);

        printf("\nafter delection the data is :");
        printdata(n,queue);
        printf("new data added is:");
        store_data(n,55,queue);
        printdata(n,queue);

        return 0;
}    