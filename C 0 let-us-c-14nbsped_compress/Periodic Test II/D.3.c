// Write macros for calculating area of circle, circumference of circle, volume of a cone and volume of sphere. 
#include <stdio.h>
#define AREA_OF_CIRCLE(r) (3.14 * r * r)
#define CIRCUMFERENCE_OF_CIRCLE(r) (2 * 3.14 * r)
#define VOLUME_OF_CONE(r, h) ((3.14 * r * r * h) / 3)
#define VOLUME_OF_SPHERE(r) ((4 * 3.14 * r * r * r) / 3)
int main(int argc, char const *argv[])
{
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    printf("area of circle: %.2f\n", AREA_OF_CIRCLE(r));
    printf("circumference of circle: %.2f\n", CIRCUMFERENCE_OF_CIRCLE(r));
    int h;
    printf("Enter height: ");
    scanf("%d", &h);
    printf("volume of cone: %.2f\n", VOLUME_OF_CONE(r, h));
    printf("volume of sphere: %.2f\n", VOLUME_OF_SPHERE(r));
    return 0;
}
