// Consider a currency system in which there are notes of seven denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int currency[6] = {100, 50, 10, 5, 2, 1}, N, count = 0;
    printf("Enter the amount: ");
    scanf("%d", &N);
    for (int i = 0; i < 6; i++)
    {
        if (N == 0)
        {
            break;
        }
        if (N >= currency[i])
        {
            count += N / currency[i];
            N = N % currency[i];
        }
    }
    printf("smallest number of notes required: %d", count);
    return 0;
}