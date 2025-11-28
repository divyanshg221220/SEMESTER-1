// Celsius to Farenheit and vice-versa
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int q;
    float c,f;
    printf("Convert Celsius to Fahrenheit and Fahrenheit to Celsius\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice : ");
    scanf("%d",&q);
    switch (q)
    {
    case 1:
        printf("Enter Temperature in Celsius : ");
        scanf("%f",&c);
        f=(c*9/5)+32;
        printf("Temperature in Fahrenheit = %.2f\n",f);
        break;
    case 2:
        printf("Enter Temperature in Fahrenheit : ");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("Temperature in Celsius = %.2f",c);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}
