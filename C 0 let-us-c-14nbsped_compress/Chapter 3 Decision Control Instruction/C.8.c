// Write a program to find the absolute value of a number entered through the keyboard. 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("absolute value: %d\n", abs(num));
    return 0;
}