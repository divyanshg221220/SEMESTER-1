// Write a program that can be used at command prompt as a calculating utility. The usage of the program is shown below. 
// C> calc <switch> <n> <m> 
// Where, n and m are two integer operands. switch can be any one of the arithmetic or comparison operators. If arithmetic operator is supplied, the output should be the result of the operation. If comparison operator is supplied then the output should be True or False. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        printf("error");
        printf("calc <switch> <n> <m>\n");
        return 0;
    }
    char const *operator = argv[1];
    int n = atoi(argv[2]);
    int m = atoi(argv[3]);
    if (strcmp(operator, "+") == 0)
    {
        printf("%d", n + m);
    }
    else if (strcmp(operator, "-") == 0)
    {
        printf("%d", n - m);
    }
    else if (strcmp(operator, "*") == 0)
    {
        printf("%d", n * m);
    }
    else if (strcmp(operator, "/") == 0)
    {
        printf("%d", n / m);
    }
    else if (strcmp(operator, "%") == 0)
    {
        printf("%d", n % m);
    }
    else if (strcmp(operator, "==") == 0)
    {
        if (n == m)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    else if (strcmp(operator, "!=") == 0)
    {
        if (n != m)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    else if (strcmp(operator, ">") == 0)
    {
        if (n > m)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }   
    }
    else if (strcmp(operator, "<") == 0)
    {
        if (n < m)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    else if (strcmp(operator, ">=") == 0)
    {
        if (n >= m)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    else if (strcmp(operator, "<=") == 0)
    {
        if (n <= m)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    return 0;
}