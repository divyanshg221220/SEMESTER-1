// Write a program using a loop where numbers from 1 to 20 are printed, but use continue to skip even numbers, and break to stop if the number is greater than 15.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=1;
    while (i<=20)
    {
        if (i%2==0)
        {
            i++;
            continue;
        }
        if (i>15)
        {
            break;
        }
        
        printf("%d\n",i);
        i++;
    }
    return 0;
}