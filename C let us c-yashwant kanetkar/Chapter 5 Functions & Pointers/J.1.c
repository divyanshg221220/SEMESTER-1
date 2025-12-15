// A 5-digit positive integer is entered through the keyboard, write a function to calculate sum of digits of the 5-digit number:
// (1) Without using recursion
// (2) Using recursion
#include <stdio.h>
void sumOfDigits(int n, int *sum)
{
    if (n == 0)
        return;
    *sum += n % 10;
    sumOfDigits(n / 10, sum);
}
int main(int argc, char const *argv[])
{
    int q, num, sum = 0;
    printf("1. Without using recursion\n");
    printf("2. Using recursion\n");
    printf("Enter your choice : ");
    scanf("%d",&q);
    printf("Enter a 5-digit positive integer: ");
    scanf("%5d",&num);
    switch (q)
    {
    case 1:
        for (int i = 0; i < 5; i++)
        {
            sum += num % 10;
            num /= 10;
        }
        break;
    case 2:
        sumOfDigits(num, &sum);
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    printf("sum: %d\n", sum);
    return 0;
}