// A dequeue is an ordered set of elements in which elements may be inserted or retrieved from either end. Using an array simulate a dequeue of characters and the operations retrieve left, retrieve right, insert left, insert right. Exceptional conditions such as dequeue full or empty should be indicated. Two pointers (namely, left and right) are needed in this simulation. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of characters in dequeue: ");
    scanf("%d", &n);
    char dequeue[n];
    for (int i = 0; i < n; i++)
    {
        dequeue[i] = '.';
    }
    int left_index = 0, right_index = 0;
    int *left = &left_index, *right = &right_index;
    int choice;
    do
    {
        for (int i = 0; i < n; i++)
        {
            printf("%c ", dequeue[i]);
        }
        printf("\n");
        printf("1. Retrieve left\n");
        printf("2. Retrieve right\n");
        printf("3. Insert left\n");
        printf("4. Insert right\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (*left == *right)
            {
                printf("dequeue empty\n");
            }
            else
            {
                printf("Retrieved left: %c\n", dequeue[*left]);
                (*right--);
                for (int i = 0; i < *right; i++)
                {
                    dequeue[i] = dequeue[i + 1];
                }
                dequeue[*right] = '.';
            }
            break;
        case 2:
            if (*left == *right)
            {
                printf("dequeue empty\n");
            }
            else
            {
                (*right--);
                printf("Retrieved right: %c\n", dequeue[*right]);
                dequeue[*right] = '.';
            }
            break;
        case 3:
            if (*right == n)
            {
                printf("dequeue full\n");
            }
            else
            {
                for (int i = *right; i > *left; i--)                
                {
                    dequeue[i] = dequeue[i - 1];
                }
                printf("Enter element to insert left: ");
                scanf(" %c", &dequeue[*left]);
                (*right++);
            }
            break;
        case 4:
            if (*right == n)
            {
                printf("dequeue full\n");
            }
            else
            {
                printf("Enter element to insert right: ");
                scanf(" %c", &dequeue[*right]);
                (*right++);
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