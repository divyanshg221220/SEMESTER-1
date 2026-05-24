// Write a program that generates and prints the Fibonacci words of order 0 through 5. If f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab", f(4) = "babba", etc.
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str1[25] = "a", str2[25] = "b";
    char temp[50];
    for (int i = 0; i < 6; i++)
    {
        printf("f(%d) = %s\n", i, str1);
        strcpy(temp, str2);
        strcat(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }   
    return 0;
}