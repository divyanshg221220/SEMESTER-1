// The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float km;
    printf("Enter distance between two cities (in km.): ");
    scanf("%f", &km);
    printf("meters: %.2f\n", km * 1000);
    printf("feet: %.2f\n", km * 3280.84);
    printf("inches: %.2f\n", km * 39370.1);
    printf("centimeters: %.2f\n", km * 100000);
    return 0;
}