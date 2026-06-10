// Write a program that receives a set of numbers as command- line arguments and prints their average. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }
    printf("average: %.2f", )