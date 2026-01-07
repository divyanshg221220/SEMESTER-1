// Linked list is a very common data structure often used to store similar data in memory. While the elements of an array occupy contiguous memory locations, those of a linked list are not constrained to be stored in adjacent location. The individual elements are stored “somewhere” in memory, rather like a family dispersed, but still bound together. The order of the elements is maintained by explicit links between them. Thus, a linked list is a collection of elements called nodes, each of which stores two item of information—an element of the list, and a link, i.e., a pointer or an address that indicates explicitly the location of the node containing the successor of this list element. 
// Write a program to build a linked list by adding new nodes at the beginning, at the end or in the middle of the linked list. Also write a function display( ) which display all the nodes present in the linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void add_at_beginning(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
void add_at_end(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        struct node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}   
void add_at_middle(struct node **head, int data, int position)
{
    if (position == 0)
    {
        return;
    }
    else if (position == 1)
    {
        add_at_beginning(head, data);
        return;
    }
    else if (position == -1)
    {
        add_at_end(head, data);
        return;
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    struct node *temp = *head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
int main(int argc, char const *argv[])
{
    int n;
    struct node *head = NULL;
    printf("Enter data to add at beginning: ");
    scanf("%d", &n);
    add_at_beginning(&head, n);
    printf("Enter data to add at end: ");
    scanf("%d", &n);
    add_at_end(&head, n);    
    int pos;
    printf("Enter data to add at middle (1 for beginning,0 for no change, -1 for end): ");
    scanf("%d", &n);
    printf("Enter position: ");
    scanf("%d", &pos);
    add_at_middle(&head, n, pos);
    display(head);
    return 0;
}