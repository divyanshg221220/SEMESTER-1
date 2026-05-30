// Write a program that receives an integer (less than or equal to nine digits in length) and prints out the number in words. For example, if the number input is 12342, then the output should be Twelve Thousand Three Hundred Forty Two. 
#include <stdio.h>
void convertToWords(long n)
{
    char *one[] = {"", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
    char *ten[] = {"", "", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
    if (n == 0)
    {
        return;
    }
    if (n > 19)
    {
        printf("%s%s", ten[n / 10], one[n % 10]);
    }
    else 
    {
        printf("%s", one[n]);
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 1000000000)
    {
        printf("Invalid Input\n");
        return 0;
    }
    if (num == 0)
    {
        printf("Zero\n");
        return 0;
    }
    if (num >= 1000000) 
    {
        int million = num / 1000000;
        if (million / 100)
        {
            convertToWords(million / 100);
            printf("Hundred ");
        }
        convertToWords(million % 100);
        printf("Million ");
        num %= 1000000;
    }
    if (num >= 1000) 
    {
        int thousand = num / 1000;
        if (thousand / 100)
        {
            convertToWords(thousand / 100);
            printf("Hundred ");
        }
        convertToWords(thousand % 100);
        printf("Thousand ");
        num %= 1000;
    }
    if (num >= 100) 
    {
        convertToWords(num / 100);
        printf("Hundred ");
        num %= 100;
    }
    convertToWords(num);
    return 0;
}