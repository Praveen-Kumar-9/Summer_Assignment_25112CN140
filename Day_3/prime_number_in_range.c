// Q10).WRITE A PROGRAM TO PRINT PRIME NUMBERS IN A RANGE.
#include <stdio.h>
int main()
{
    int start, end, i, j, is_prime,count=0;
    printf("Enter your starting number: ");
    scanf("%d", &start);
    printf("\n");
    printf("Enter your ending number: ");
    scanf("%d", &end);
    printf("\n");
    printf("The prime numbers from %d to %d are\n\n[",start,end);
    for (i = start; i <= end; i++)
    {
        if (i < 2)
        {
            continue;
        }
        is_prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            printf("%d, ", i);
            count+=1;
        }
    }
    printf("]\n\nThe Total Number Of Prime Numbers Are %d\n",count);
    return 0;
}