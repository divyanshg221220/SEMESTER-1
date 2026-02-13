// Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float f, c;
    printf("Enter temperature of a city in Fahrenheit degrees: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("centigrade degrees: %.2f\n", c);
    return 0;
}