// Write a C program that uses the break statement to stop printing numbers once the number 5 is reached in a loop.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=1;
    while (i>=0)
    {
        if (i==5)
        {
            printf("%d\n",i);
            break;
        }
        printf("%d\n",i);
        i++;
    }
    return 0;
}
