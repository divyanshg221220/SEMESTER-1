// Population of a town today is 100000. The population has increased steadily at the rate of 10 % per year for last 10 years. Write a program to determine the population at the end of each year in the last decade.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int population = 100000;
    for (int i = 10; i > 0; i--)
    {
        population -= population * 10 / 100;
        printf("population at year %d: %d\n", i, population);
    }
    return 0;
}