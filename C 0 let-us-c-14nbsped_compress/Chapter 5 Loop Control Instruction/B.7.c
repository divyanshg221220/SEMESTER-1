// Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > 0)
            positiveCount++;
        else if (number < 0)
            negativeCount++;
        else
            zeroCount++;
        printf("Do you want to enter another number? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y');
    printf("positive numbers: %d\n", positiveCount);
    printf("negative numbers: %d\n", negativeCount);
    printf("zeros: %d\n", zeroCount);
    return 0;
}
