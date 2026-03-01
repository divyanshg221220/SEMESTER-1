// Write macro definitions with arguments for calculation of Simple Interest and Amount. Store these macro definitions in a file called “interest.h”. Include this file in your program, and use the macro definitions for calculating simple interest and amount. 
#include <stdio.h>
#include "interest.h"
main()
{
    float p, r, t;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("simple interest: %.2f\n", SIMPLE_INTEREST(p, r, t));
    printf("amount: %.2f\n", AMOUNT(p, r, t));
}