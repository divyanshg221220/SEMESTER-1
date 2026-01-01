// Write a program that converts a string like "124" to an integer 124.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[100];
    int num = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (char *ptr = str; *ptr != '\0'; ptr++)
    {
        num = num * 10 + (*ptr - '0');
    }
    printf("integer: %d\n", num);
    return 0;
}