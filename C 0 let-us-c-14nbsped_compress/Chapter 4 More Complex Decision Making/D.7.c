// In digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow Black (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae: 
// White=Max(Red/255,Green/255,Blue/255)
// Cyan=((White-Red/255)/White)
// Magenta=((White-Green/255)/White)
// Yellow=((White-Blue/255)/White)
// Black=(1-White)
// Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r, g, b;
    float w, c, m, y, k;
    printf("Enter Red: ");
    scanf("%d", &r);
    printf("Enter Green: ");
    scanf("%d", &g);
    printf("Enter Blue: ");
    scanf("%d", &b);
    if (r == 0 && g == 0 && b == 0)
    {
        c = m = y = 0;
        k = 1;
    }
    else
    {
        w = (r/255.00 > b/255.00) ? (r/255.00 > g/255.00 ? r/255.00 : g/255.00) : (b/255.00 > g/255.00 ? b/255.00 : g/255.00);
        c = ((w - r/255.00)/w);
        m = ((w - g/255.00)/w);
        y = ((w - b/255.00)/w);
        k = (1 - w);
    }
    printf("cyan: %.2f\n", c);
    printf("magenta: %.2f\n", m);
    printf("yellow: %.2f\n", y);
    printf("black: %.2f\n", k);
    return 0;
}