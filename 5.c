// Find Simple and Compound Interest
//     SI=(P * R * T)/100;
//     CI=P*pow((1+R/100),T)-P;
# include <stdio.h>
# include <math.h>
int main(int argc, char const *argv[])
{
    float p,r,t,si,ci;
    printf("Enter Principal Amount : ");
    scanf("%f",&p);
    printf("Enter Rate of Interest : ");
    scanf("%f",&r);
    printf("Enter Time in Years : ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    ci=p*pow((1+r/100),t)-p;
    printf("Simple Interest = %.2f\n",si);
    printf("Compound Interest = %.2f",ci);
    return 0;
}
