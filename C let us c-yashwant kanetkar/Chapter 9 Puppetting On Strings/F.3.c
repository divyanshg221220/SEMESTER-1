// Write a program to reverse the strings stored in the following array of pointers to strings: 
// char  *s[ ] = { 
//                 "To err is human...",  
//                 "But to really mess things up...",  
//                 "One needs to know C!!" 
//               };
// Hint: Write a function xstrrev ( string ) which should reverse the contents of one string. Call this function for reversing each string stored in s. 
#include <stdio.h>
#include <string.h>
void xstrrev(char *string)
{
    printf("%s\n", strrev(string));
}
int main(int argc, char const *argv[])
{
    char  *s[ ] = { 
                "To err is human...",  
                "But to really mess things up...",  
                "One needs to know C!!" 
              };
    int n_line = sizeof(s) / sizeof(s[0]);
    for (int i = 0; i < n_line; i++)
    {
        char temp[100];
        strcpy(temp, s[i]);
        xstrrev(temp);
    }
    return 0;
}
