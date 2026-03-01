// Write down macro definitions for the following: 
// 1. To test whether a character is a small case letter or not. 
// 2. To test whether a character is a upper case letter or not. 
// 3. To test whether a character is an alphabet or not. Make use of the macros you defined in 1 and 2 above. 
// 4. To obtain the bigger of two numbers. 
#include <stdio.h>
#define IS_LOWER_CASE(c) ((c) >= 'a' && (c) <= 'z')
#define IS_UPPER_CASE(c) ((c) >= 'A' && (c) <= 'Z')
#define IS_ALPHABET(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))
#define BIGGER(a, b) ((a) >= (b) ? (a) : (b))
main()
{
    char c;
    int a, b;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (IS_LOWER_CASE(c))
    {
        printf("lower case letter\n");
    }
    else
    {
        printf("not a lower case letter\n");
    }
    if (IS_UPPER_CASE(c))
    {
        printf("upper case letter\n");
    }
    else
    {
        printf("not an upper case letter\n");
    }
    if (IS_ALPHABET(c))
    {
        printf("an alphabet\n");
    }
    else
    {
        printf("not an alphabet\n");
    }
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("bigger number: %d\n", BIGGER(a, b));
}