#include<stdio.h>

void printdata(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
     printf("\n");
}
void removedata(int arr[],int size,int index)
{
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
}
void deletedata(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}

int main()
  {  
    int arr[100]={1,2,3,4,5};
    int size=5;
    int index=6;
     
    printdata(arr,size);
    removedata(arr,size,index);
    deletedata(arr,size);

    return 0;
  }