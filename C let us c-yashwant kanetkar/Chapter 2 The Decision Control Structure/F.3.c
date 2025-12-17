// An Insurance company follows following rules to calculate premium. 
// (1) If a person’s health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs. 
// (2) If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh. 
// (3) If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village and is a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000. 
// (4) In all other cases the person is not insured. 
// Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount for which he/she can be insured.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char health, place, gender;
    int age, premium, policyAmount;
    printf("Enter person's health (E for Excellent, P for Poor): ");
    scanf(" %c", &health);
    printf("Enter person's age: ");
    scanf("%d", &age);
    printf("Enter person's place (C for City, V for Village): ");
    scanf(" %c", &place);
    printf("Enter person's gender (M for Male, F for Female): ");
    scanf(" %c", &gender);
    if (health == 'E' && age >= 25 && age <= 35 && place == 'C' && gender == 'M')
    {
        premium = 4;
        policyAmount = 200000;
        printf("person should be insured\npremium: Rs.%d per thousand\npolicy amount: Rs.%d\n", premium, policyAmount);
    }
    else if (health == 'E' && age >= 25 && age <= 35 && place == 'C' && gender == 'F')
    {
        premium = 3;
        policyAmount = 100000;
        printf("person should be insured\npremium: Rs.%d per thousand\npolicy amount: Rs.%d\n", premium, policyAmount);
    }
    else if (health == 'P' && age >= 25 && age <= 35 && place == 'V' && gender == 'M')
    {
        premium = 6;
        policyAmount = 10000;
        printf("person should be insured\npremium: Rs.%d per thousand\npolicy amount: Rs.%d\n", premium, policyAmount);
    }
    else
    {
        printf("person should not be insured\n");
    }
    return 0;
}