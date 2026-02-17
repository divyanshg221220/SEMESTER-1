// Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int C, D, temp;
    printf("Enter C: ");
    scanf("%d", &C);
    printf("Enter D: ");
    scanf("%d", &D);
    temp = C;
    C = D;
    D = temp;
    printf("C: %d\n", C);
    printf("D: %d\n", D);
    return 0;
}