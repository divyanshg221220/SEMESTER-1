// A certain grade of steel is graded according to the following conditions: 
// (i) Hardness must be greater than 50 
// (ii) Carbon content must be less than 0.7 
// (iii) Tensile strength must be greater than 5600
// The grades are as follows: 
// Grade is 10 if all three conditions are met 
// Grade is 9 if conditions (i) and (ii) are met 
// Grade is 8 if conditions (ii) and (iii) are met 
// Grade is 7 if conditions (i) and (iii) are met 
// Grade is 6 if only one condition is met 
// Grade is 5 if none of the conditions are met 
// Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hardness, tensileStrength;
    float carbonContent;
    printf("Enter hardness: ");
    scanf("%d", &hardness);
    printf("Enter carbon content: ");
    scanf("%f", &carbonContent);
    printf("Enter tensile strength: ");
    scanf("%d", &tensileStrength);
    int condition1 = hardness > 50;
    int condition2 = carbonContent < 0.7;
    int condition3 = tensileStrength > 5600;
    int grade;
    if (condition1 && condition2 && condition3)
        grade = 10;
    else if (condition1 && condition2)
        grade = 9;
    else if (condition2 && condition3)
        grade = 8;
    else if (condition1 && condition3)
        grade = 7;
    else if (condition1 || condition2 || condition3)
        grade = 6;
    else
        grade = 5;
    printf("grade: %d\n", grade);
    return 0;
}