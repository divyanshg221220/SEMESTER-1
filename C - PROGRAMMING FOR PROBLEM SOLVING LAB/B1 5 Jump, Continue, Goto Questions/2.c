// Write a program to print numbers from 1 to 10, but skip printing the number 5 using the continue statement.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=1;
    while (i<=10)
    {
        if (i==5)
        {
            i++;
            continue;
        }
        printf("%d\n",i);
        i++;
    }
    return 0;
}