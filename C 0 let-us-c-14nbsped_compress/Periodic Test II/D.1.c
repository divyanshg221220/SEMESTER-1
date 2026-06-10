// Define a function that receives 4 integers and returns sum, product and average of these integers. 
#include <stdio.h>
int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}
int product(int a, int b, int c, int d)
{
    return a * b * c * d;
}
float average(int a, int b, int c, int d)
{
    return (float)(a + b + c + d) / 4;
}
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);
    printf("sum: %d\n", sum(a, b, c, d));
    printf("product: %d\n", product(a, b, c, d));
    printf("average: %.2f\n", average(a, b, c, d));
    return 0;
}