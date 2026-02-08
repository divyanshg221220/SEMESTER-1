// A dequeue is an ordered set of elements in which elements may be inserted or retrieved from either end. Using an array simulate a dequeue of characters and the operations retrieve left, retrieve right, insert left, insert right. Exceptional conditions such as dequeue full or empty should be indicated. Two pointers (namely, left and right) are needed in this simulation. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of characters in dequeue: ");
    scanf("%d", &n);
    char dequeue[n];
    int left = 0, right = 0;
    int choice;
    do
    {
        printf("1. Retrieve left\n");
        printf("2. Retrieve right\n");
        printf("3. Insert left\n");
        printf("4. Insert right\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        for (int i = left; i <= right; i++)
        {
            printf("%c ", dequeue[i]);
        }
        printf("\n");
        switch (choice)
        {
        case 1:
            if (left == right)
            {
                printf("dequeue empty\n");
            }
            else
            {
                printf("Retrieved left: %c\n", dequeue[left]);
                left++;
            }
            break;
        case 2:
            if (left == right)
            {
                printf("dequeue empty\n");
            }
            else
            {
                printf("Retrieved right: %c\n", dequeue[right]);
            }
            break;
        case 3:
            if (right == n)
            {
                printf("dequeue full\n");
            }
            else
            {
                printf("Enter element to insert left: ");
                scanf(" %c", &dequeue[left]);
                right++;
            }
            break;
        case 4:
            if (right == n)
            {
                printf("dequeue full\n");
            }
            else
            {
                printf("Enter element to insert right: ");
                scanf(" %c", &dequeue[right]);
                right++;
            }
            break;
        case 5:
            printf("Exit\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    } while (choice != 5);
    return 0;
}