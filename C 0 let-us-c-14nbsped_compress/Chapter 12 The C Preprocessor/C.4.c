// Write down macro definitions for the following: 
// 1. To find arithmetic mean of two numbers. 
// 2. To find absolute value of a number. 
// 3. To convert a upper case alphabet to lower case. 
// 4. To obtain the bigger of two numbers.
#include <stdio.h>
#define ARITHMETIC_MEAN(x, y) (((x) + (y)) / 2.0)
#define ABSOLUTE_VALUE(x) ((x) < 0 ? -(x) : (x))
#define TO_LOWERCASE(c) (((c) >= 'A' && (c) <= 'Z') ? ((c) + ('a' - 'A')) : (c))
#define BIGGER_OF_TWO(x, y) ((x) >= (y) ? (x) : (y))
main()
{
    int a, b;
    char c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("arithmetic mean: %.2f\n", ARITHMETIC_MEAN(a, b));
    printf("absolute value: %d\n", ABSOLUTE_VALUE(a));
    printf("absolute value: %d\n", ABSOLUTE_VALUE(b));
    printf("Enter an uppercase alphabet: ");
    scanf(" %c", &c);
    printf("lowercase: %c\n", TO_LOWERCASE(c));
    printf("bigger: %d\n", BIGGER_OF_TWO(a, b));
}