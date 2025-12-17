// Implement the following procedure to generate prime numbers from 1 to 100 into a program. This procedure is called sieve of Eratosthenes. 
// step 1 Fill an array num[100] with numbers from 1 to 100 
// step 2 Starting with the second entry in the array, set all its multiples to zero. 
// step 3 Proceed to the next non-zero element and set all its multiples to zero. 
// step 4 Repeat step 3 till you have set up the multiples of all the non-zero elements to zero 
// step 5 At the conclusion of step 4, all the non-zero entries left in the array would be prime numbers, so print out these numbers. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num[100];
    for (int i = 0; i < 100; i++)
    {
        num[i] = i + 1;
    }
    for (int i = 1; i < 100; i++)
    {
        if (num[i] != 0)
        {
            for (int j = i + num[i]; j < 100; j += num[i])
            {
                num[j] = 0;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (num[i] != 0)
        {
            printf("%d ", num[i]);
        }
    }
    return 0;
}
