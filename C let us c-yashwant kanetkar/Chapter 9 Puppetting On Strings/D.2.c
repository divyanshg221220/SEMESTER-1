// If the string "Alice in wonder land" is fed to the following scanf( ) statement, what will be the contents of the arrays str1, str2, str3 and str4? 
// scanf ( "%s%s%s%s%s", str1, str2, str3, str4 ) ; 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str1[25], str2[25], str3[25], str4[25];
    scanf("%s%s%s%s", str1, str2, str3, str4);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);
    return 0;
}