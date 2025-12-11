// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ram, shyam, ajay;
    printf("Enter ages of Ram: ");
    scanf("%d", &ram);
    printf("Enter ages of Shyam: ");
    scanf("%d", &shyam);
    printf("Enter ages of Ajay: ");
    scanf("%d", &ajay);
    if (ram < shyam && ram < ajay)
    {
        printf("Ram\n");
    }
    else if (shyam < ram && shyam < ajay)
    {
        printf("Shyam\n");
    }
    else if (ajay < ram && ajay < shyam)
    {
        printf("Ajay\n");
    }
    return 0;
}