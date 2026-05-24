// Which is more appropriate for reading in a multi-word string? 
// gets( )    printf( )    scanf( )    puts( )
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("string: ");
    puts(str);
    return 0;
}