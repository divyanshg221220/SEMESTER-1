// Convert Celsius to Fahrenheit and Fahrenheit to Celsius (take value till 2 decimal places)
//    f=(c*9/5)+32;
//    c=(f-32)*5/9;
#include <stdio.h>
int main() {
    float c,f,q;
    printf("Enter 1 to convert Celsius to Fahrenheit\n");
    printf("Enter 2 to convert Fahrenheit to Celsius\n");
    printf("Enter your choice : ");
    scanf("%f",&q);
    if(q!=1 && q!=2) {
        printf("Invalid Input");
        return 0;
    }
    if(q==1) {
        printf("Enter Temperature in Celsius : ");
        scanf("%f",&c);
        f=(c*9/5)+32;
        printf("Temperature in Fahrenheit = %.2f\n",f);
        return 0;
    }
    if (q==2) {
        printf("Enter Temperature in Fahrenheit : ");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("Temperature in Celsius = %.2f",c);
        return 0;
    }
}