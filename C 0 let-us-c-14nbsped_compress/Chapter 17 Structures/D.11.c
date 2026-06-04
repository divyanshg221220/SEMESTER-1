// Write a program to implement an ascending order linked list. This means that any new element that is added to the linked list gets inserted at a place in the linked list such that its ascending order nature remains intact.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char data[25];
    struct node *next;
};
void insert(struct node **head, char *data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    strcpy(new_node->data, data);
    new_node->next = NULL;
    if (*head == NULL || strcmp((*head)->data, data) > 0)
    {
        new_node->next = *head;
        *head = new_node;
        return;
    }
    struct node *temp = *head;
    while (temp->next != NULL && strcmp(temp->next->data, data) < 0)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void display(struct node *head)
{
    struct node *temp = head;
    if (temp == NULL)
    {
        printf("empty list");
    }
    while (temp != NULL)
    {
        printf("%s ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    int choice = 1;
    struct node *head = NULL;
    do
    {
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            {
                char data[25];
                printf("Enter data: ");
                scanf("%s", &data);
                insert(&head, data);
                break;
            }
        case 2:
            display(head);
            break;
        case 3:
            printf("Exit\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    } while (choice != 3);
    return 0;
}