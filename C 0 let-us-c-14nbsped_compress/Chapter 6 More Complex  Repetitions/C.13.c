// Write a program to produce the following output:
//      1
//    2  3    
//   4  5  6   
// 7  8  9  10 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", i * (i + 1) / 2 + k + 1);
        }
        printf("\n");
    }
    return 0;
}