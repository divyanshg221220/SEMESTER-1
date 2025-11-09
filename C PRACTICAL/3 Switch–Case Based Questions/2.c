// Write a program to display the day of the week (1->Monday, ..., 7->Sunday).
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int q;
    printf("Enter a number between 1 to 7 : ");
    scanf("%d",&q);
    switch (q)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    return 0;
}
