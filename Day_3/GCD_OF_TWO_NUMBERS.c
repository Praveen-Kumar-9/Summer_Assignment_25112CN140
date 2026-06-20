// Q11).WRITE A PROGRAM TO FIND GCD OF TWO NUMBERS.
#include <stdio.h>
int main()
{
    int i, num1, num2, gcd;
    printf("Enter your 1st number:");
    scanf("%d", &num1);
    printf("Enter your 2nd number:");
    scanf("%d", &num2);
    printf("The Common Factors Of %d and %d is--> ", num1, num2);
    gcd = 1; // initialize gcd
    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            printf("%d, ", gcd);
        }
    }
    printf("\nTHE GCD OF %d AND %d IS %d", num1, num2, gcd);

    return 0;
}