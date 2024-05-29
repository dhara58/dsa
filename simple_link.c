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
    temp -> next = NULL; 
 
    if(head == NULL){ 
        head = temp; 
        return; 
    } 
    while(ptr -> next != NULL){ 
        ptr = ptr -> next; 
    } 
    ptr -> next = temp; 
    return; 
 
}  
void  insert_first(int val){ 
    struct node *ptr = head; 
    struct node *temp = malloc(sizeof(struct node)); 
 
    temp -> data = val; 
    temp ->  next = head; 
 
    if(head == NULL){ 
        head =  temp; 
        return; 
    } 
   
} 
void display(){ 
    struct node *ptr = head; 
 
    if(head == NULL){ 
        printf("List is empty.\n"); 
        return; 
    } 
 
    while(ptr != NULL){ 
        printf("%d ", ptr->data); 
        ptr = ptr->next; 
    } 
    printf("\n"); 
} 
void delete_end(){ 
    struct node *ptr = head; 
    struct node *pre = NULL; 
 
    if (head == NULL) 
    { 
        printf("list is empty.\n"); 
        return; 
    } 
    if(head -> next == NULL){ 
        free(head); 
        head = NULL; 
        return; 
    } 
    while (ptr -> next != NULL) 
    { 
        pre = ptr; 
        ptr = ptr -> next; 
    } 
    free(ptr); 
    pre -> next = NULL; 
} 
int main(){ 
    int choice,val; 
 
    do 
    { 
        printf("1. Insert\n"); 
        printf("2. Display\n"); 
        printf("3. Delete\n"); 
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
        delete_end(); 
        break; 
     
    case 4 : 
        exit(0); 
 
    default: 
    printf("invalid choice \n"); 
        break; 
    } 
    } 
       while ( choice < 7); 
     return 0; 
     
 
}