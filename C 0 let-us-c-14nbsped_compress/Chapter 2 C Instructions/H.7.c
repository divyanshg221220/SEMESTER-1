// If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float angle, radian, sin_value, cos_value, tan_value, cosec_value, sec_value, cot_value;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle);
    radian = angle * (3.14 / 180);
    sin_value = sin(radian);
    cos_value = cos(radian);
    tan_value = tan(radian);
    cosec_value = 1 / sin_value;
    sec_value = 1 / cos_value;
    cot_value = 1 / tan_value;
    printf("sin(%.2f) = %.2f\n", angle, sin_value);
    printf("cos(%.2f) = %.2f\n", angle, cos_value);
    printf("tan(%.2f) = %.2f\n", angle, tan_value);
    printf("cosec(%.2f) = %.2f\n", angle, cosec_value);
    printf("sec(%.2f) = %.2f\n", angle, sec_value);
    printf("cot(%.2f) = %.2f\n", angle, cot_value);
    return 0;
}