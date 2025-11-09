// Convert Celsius to Fahrenheit and Fahrenheit to Celsius (take value till 2 decimal places)
//    f=(c*9/5)+32;
//    c=(f-32)*5/9;
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float q,c,f;
    printf("Convert Celsius to Fahrenheit and Fahrenheit to Celsius (take value till 2 decimal places)\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice : ");
    scanf("%f",&q);
    if (q==1)
    {
        printf("Enter Temperature in Celsius : ");
        scanf("%f",&c);
        f=(c*9/5)+32;
        printf("Temperature in Fahrenheit = %.2f\n",f);
    }
    else if (q==2)
    {
        printf("Enter Temperature in Fahrenheit : ");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("Temperature in Celsius = %.2f",c);
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}
