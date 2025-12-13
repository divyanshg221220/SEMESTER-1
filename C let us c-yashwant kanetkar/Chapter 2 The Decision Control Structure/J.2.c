// Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);
    return 0;
}