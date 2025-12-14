// Write a program to find the factorial value of any number entered through the keyboard. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("factorial: %d\n", factorial);
    return 0;
}