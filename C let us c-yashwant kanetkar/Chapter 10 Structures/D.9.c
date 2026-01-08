// A stack is a data structure in which addition of new element or deletion of existing element always takes place at the same end. This end is often known as ‘top’ of stack. This situation can be compared to a stack of plates in a cafeteria where every new plate taken off the stack is also from the ‘top’ of the stack. There are several application where stack can be put to use. For example, recursion, keeping track of function calls, evaluation of expressions, etc. Write a program to implement a stack using a linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void push(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
void pop(struct node **head)
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
        printf("empty stack");
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
        printf("1. Push\n");
        printf("2. Pop\n");
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
                push(&head, data);
                break;
            }
        case 2:
            pop(&head);
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