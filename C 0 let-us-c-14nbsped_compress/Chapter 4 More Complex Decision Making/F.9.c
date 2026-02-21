// A university has the following rules for a student to qualify for a degree with A as the main subject and B as the subsidiary subject: 
// (a) He should get 55 percent or more in A and 45 percent or more in B. 
// (b) If he gets than 55 percent in A he should get 55 percent or more in B. However, he should get at least 45 percent in A. 
// (c) If he gets less than 45 percent in B and 65 percent or more in A he is allowed to reappear in an examination in B to qualify. 
// (d) In all other cases he is declared to have failed. 
// Write a program to receive marks in A and B and Output whether the student has passed, failed or is allowed to reappear in B.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marksA, marksB;
    printf("Enter marks in subject A: ");
    scanf("%d", &marksA);
    printf("Enter marks in subject B: ");
    scanf("%d", &marksB);
    if (marksA >= 55 && marksB >= 45)
    {
        printf("passed\n");
    }
    else if (marksA < 55 && marksB >= 55 && marksA >= 45)
    {
        printf("passed\n");
    }
    else if (marksB < 45 && marksA >= 65)
    {
        printf("reappear in B\n");
    }
    else
    {
        printf("failed\n");
    }
    return 0;
}