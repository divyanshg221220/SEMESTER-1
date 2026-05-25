// A Credit Card number is usually a 16-digit number. A valid Credit Card number would satisfy a rule explained below with the help of a dummy Credit Card number—4567 1234 5678 9129. Start with the rightmost - 1 digit and multiply every other digit by 2.  
// 4 5 6 7     1  2  3  4    5   6  7   8     9   1   2  9 
// 8   12      2     6       10     14        18      4 
// Then subtract 9 from any number larger than 10. Thus we get: 
// 8  3  2  6  1  5  9  4 
// Add them all up to get 38. 
// Add all the other digits to get 42. 
// Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card number is valid. 
// Write a program that receives a Credit Card number and checks using the above rule whether the Credit Card number is valid. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int card[16];
    printf("Enter a 16-digit Credit Card number: ");
    for (int i = 0; i < 16; i++)
    {
        scanf("%d", &card[i]);
    }
    int sum = 0;
    for (int i = 0; i < 16; i++)
    {
        if (i % 2 == 0)
        {
            if (card[i] * 2 >= 10)
            {
                sum += (card[i] * 2) - 9;
            }
            else
            {
                sum += card[i] * 2;
            }
        }
        else
        {
            sum += card[i];
        }
    }
    if (sum  % 10 == 0)
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}