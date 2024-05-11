#include<stdio.h>

void add(int arr[],int size,int capacity,int element,int index)
{
    if(size>=capacity)
    {
        printf("array size cannot be defined");
    }
    else
    {
       for(int i=size-1;i>=index;i--)
       {
        arr[i+1]=arr[i];
       }
       arr[index]=element;
       (size)++;
    }
}
void printarray(int arr[],int size)
{
    for(int i=0;i<=size;i++)
    {
        printf("%d",arr[i]);
    }
 
}
int main()
{
    int arr[100]={1,2,3,4,5};
    int capacity=100;
    int size=5;
    int element=6;
    int index=5;

    add(arr,size,capacity,element,index);
    printarray(arr,size);

    return 0;
}