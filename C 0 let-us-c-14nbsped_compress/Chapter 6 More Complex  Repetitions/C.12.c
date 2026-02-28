// Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hr, min;
    printf("Enter the hours: ");
    scanf("%2d", &hr);
    printf("Enter the minutes: ");
    scanf("%2d", &min);
    printf("time: %02d:%02d ", hr, min);
    if (hr == 0 && min == 0)
    {
        printf("Midnight");
    }
    else if (hr < 12)
    {
        printf("AM");
    }
    else if (hr == 12 && min == 00)
    {
        printf("Noon");
    }
    else
    {
        printf("PM");
    }
    return 0;
}
