// Unlike a stack, in a queue the addition of new element takes place at the end (called ‘rear’ of queue) whereas deletion takes place at the other end (called ‘front’ of queue). Write a program to implement a queue using a linked list. 
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void enqueue(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
    struct node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
void dequeue(struct node **head)
{
    if (*head == NULL)
    {
        printf("underflow\n");
        return;
    }
    struct node *temp = *head;
    *head = (*head)->next;
    free(temp);
}
void display(struct node *head)
{
    struct node *temp = head;
    if (temp == NULL)
    {
        printf("empty queue");
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    int choice;
    struct node *head = NULL;
    do
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            {
                int data;
                printf("Enter data: ");
                scanf("%d", &data);
                enqueue(&head, data);
                break;
            }
        case 2:
            dequeue(&head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            printf("Exit\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    } while (choice != 4);
    return 0;
}