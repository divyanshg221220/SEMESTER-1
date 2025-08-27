// Swapping the values of two variables
//    i. Using third variable
//   ii. Without using third variable
#include <stdio.h>
int main() {
    int q;
    printf("Enter 1 to swap using third variable\n");
    printf("Enter 2 to swap without using third variable\n");
    printf("Enter your choice : ");
    scanf("%d",&q);
    if(q!=1 && q!=2) {
        printf("Invalid Input");
        return 0;
    }
    if(q==1) {
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
    if (q==2) {
        int a, b;
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        a = a + b;
        b = a - b;
        a = a - b;
        printf("First number : %d\nSecond number : %d", a, b);
        return 0;
    }
}