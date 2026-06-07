// Create an array of four function pointers. Each pointer should point to a different function. Each of these functions should receive two integers and return a float. Using a loop call each of these functions using the addresses present in the array. 
#include <stdio.h>
float add(int a, int b)
{
    return a + b;
}
float sub(int a, int b)
{
    return a - b;
}
float mul(int a, int b)
{
    return a * b;
}
float div(int a, int b)
{
    if (b == 0)
    {
        printf("Division by zero\n");
        return 0;
    }
    return a / b;
}
int main(int argc, char const *argv[])
{
    float (*f[4])(int, int) = {add, sub, mul, div};
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    for (int i = 0; i < 4; i++)
    {
        printf("function %d: %f\n", i, f[i](a, b));
    }
    return 0;
}