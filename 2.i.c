// WAP to swap 2 no.'s i) Using temp
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("First number : %d\nSecond number : %d", a, b);
    return 0;
}