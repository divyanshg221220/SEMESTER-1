// From radius calculate diameter,area and circumference
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);
    printf("diameter: %d\n",2*r);
    printf("area: %.2f\n",3.14*r*r);
    printf("circumferece %.2f\n",2*3.14*r);
    return 0;
}