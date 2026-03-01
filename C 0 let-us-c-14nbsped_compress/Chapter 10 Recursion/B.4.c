// A positive integer is entered through the keyboard, write a function to find the binary equivalent of this number :  
// (1) Without using recursion 
// (2) Using recursion
#include <stdio.h>
void binary(int n)
{
    if (n == 0)
    {
        printf("%d", 0);
        return;
    }
    binary(n / 2);
    printf("%d", n % 2);
}
int main(int argc, char const *argv[])
{
    int choice, num;
    printf("1. Without using recursion\n");
    printf("2. Using recursion\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        {
            int binary = 0, place = 1;
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            while (num > 0)
            {
                binary += (num % 2) * place;
                num /= 2;
                place *= 10;
            }
            printf("binary equivalent: %d\n", binary);
            break;
        }
    case 2:
        printf("Enter a positive integer: ");
        scanf("%d", &num);
        printf("binary equivalent: ");
        binary(num);
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    return 0;
}