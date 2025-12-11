// A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char num[5];
    printf("Enter a digit: ");
    scanf("%5s", num);
    printf("Reversed Number: %c%c%c%c%c\n", num[4], num[3], num[2], num[1], num[0]);
    if (num[0] == num[4] && num[1] == num[3])
    {
        printf("original and reversed numbers are equal\n");
    }
    else
    {
        printf("original and reversed numbers are not equal\n");
    }
    return 0;
}