// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Hint: Use the % (modulus) operator)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("leap year: %d\n", year);
    }
    else
    {
        printf("not a leap year: %d\n", year);
    }
    
    return 0;
}
