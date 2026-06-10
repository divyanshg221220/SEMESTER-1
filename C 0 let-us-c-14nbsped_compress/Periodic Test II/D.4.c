// Write a program that prints sizes of all types of chars, ints and reals. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("size of char: %zu\n", sizeof(char));
    printf("size of signed char: %zu\n", sizeof(signed char));
    printf("size of unsigned char: %zu\n", sizeof(unsigned char));
    printf("size of short: %zu\n", sizeof(short));
    printf("size of short int: %zu\n", sizeof(short int));
    printf("size of signed short: %zu\n", sizeof(signed short));
    printf("size of unsigned short: %zu\n", sizeof(unsigned short));
    printf("size of int: %zu\n", sizeof(int));
    printf("size of signed int: %zu\n", sizeof(signed int));
    printf("size of unsigned int: %zu\n", sizeof(unsigned int));
    printf("size of long: %zu\n", sizeof(long));
    printf("size of long int: %zu\n", sizeof(long int));
    printf("size of signed long: %zu\n", sizeof(signed long));
    printf("size of unsigned long: %zu\n", sizeof(unsigned long));
    printf("size of long long: %zu\n", sizeof(long long));
    printf("size of long long int: %zu\n", sizeof(long long int));
    printf("size of signed long long: %zu\n", sizeof(signed long long));
    printf("size of unsigned long long: %zu\n", sizeof(unsigned long long));
    printf("size of float: %zu\n", sizeof(float));
    printf("size of double: %zu\n", sizeof(double));
    printf("size of long double: %zu\n", sizeof(long double));
    return 0;
}