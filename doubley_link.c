#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;

void insert_end(int val)
{

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void delete_end()
{
    struct node *ptr = head;
    struct node *p = NULL;

    if (head == NULL)
    {
        printf("list is empty.\n");
        return;
    }
    if (head->next == NULL)
    {
        free(ptr);
        head = NULL;
        return;
    }
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    free(ptr);
    ptr->next = NULL;
}
int main()
{
    int val, choice;

    do
    {
        printf("1. Insert at end\n");
        printf("2. Display\n");
        printf("3. delete at end\n");
        printf("4. exit\n");
        printf("5. enter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter value to insert at end: ");
            scanf("%d", &val);
            insert_end(val);
            break;

        case 2:
            display();
            break;

        case 3:
            delete_end();
            break;

        case 4:
            exit(0);

        default:
            printf("invalid choice \n");
            break;
        }
    }
     while (choice < 7);

    return 0;
}    