// Write a program that takes a number input and if the number is negative, jump using goto to print "Negative number not allowed."
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    if (i<0)
    {
        goto negative;
    }
    else
    {
        printf("Number: %d\n",i);
    }
    negative:
        printf("Negative number not allowed\n");
    return 0;
}
