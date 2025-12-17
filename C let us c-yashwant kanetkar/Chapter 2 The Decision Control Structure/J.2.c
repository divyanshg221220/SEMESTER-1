// Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("leap year\n") : printf("not a leap year\n");
    return 0;
}