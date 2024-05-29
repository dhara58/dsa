#include<stdio.h> 
#include<stdlib.h> 
 
struct node{ 
    int data; 
    struct node *next; 
}; 
struct node *head = NULL; 
 
void insert_end(int val){ 
    
    struct node *ptr = head; 
    struct node *temp = malloc(sizeof(struct node) ); 
 
    temp -> data = val; 
    
 
    if(head == NULL){ 
        head = temp; 
        temp -> next = head; 
        return; 
    } 
    while(ptr -> next != head){ 
        ptr = ptr -> next; 
    } 
    ptr -> next = temp; 
    temp -> next = head; 

    return; 
 
}
void  insert_first(int val){ 
    struct node *ptr = head; 
    struct node *temp = malloc(sizeof(struct node)); 
 
    temp -> data = val; 
    temp ->  next = head; 
 
  
        head =  temp; 
           
}   
void display(){ 
    struct node *ptr = head; 
 
    if(head == NULL){ 
        printf("List is empty.\n"); 
        return; 
    } 
 
    while(ptr->next != head){ 
        printf("%d ", ptr->data); 
        ptr = ptr->next; 
    } 
     printf("%d ", ptr->data); 
    printf("\n"); 
} 
int main(){ 
    int choice,val; 
 
    do 
    { 
        printf("1. Insert\n"); 
        printf("2. Display\n");
        printf("3. insert at first\n");
        printf("4. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
    

     switch(choice) 
     { 
    case 1: 
        printf("enter value to insert at end: "); 
        scanf("%d",&val); 
        insert_end(val); 
        break; 
 
    case 2: 
        display(); 
        break; 

    case 3:
        printf("enter value to insert at first: "); 
        scanf("%d",&val); 
        insert_first(val); 
        break;    
     }
    }

       while ( choice < 7); 
     return 0; 
}       