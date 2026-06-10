// Write a program that receives a set of numbers as command- line arguments and prints their average. 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    float sum = 0;
    for (int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }
    float average = sum / (argc - 1);
    printf("average: %.2f", average);
    return 0;
}