// Q16).WRITE A PROGRAM TO PRINT ARMSTRONG NUMBERS IN A RANGE.
#include <stdio.h>
#include<math.h>
int main()
{
    int start, end,temp,remainder,sum ,n_digits;
    printf("Enter your Starting Number:");
    scanf("%d", &start);
    printf("Enter your Ending Number:");
    scanf("%d", &end);
    printf("Armstrong Numbers From %d To %d are:\n",start,end);
    for (int i = start; i <= end; i++)
    {
        if (i<0)
        {
            continue;
        }
        sum=0;
        n_digits=0;
        temp=i;
        if (temp==0)
        {
            n_digits=1;
        }
        else
        {
            while (temp!=0)
            {
                temp=temp/10;
                n_digits++;
            }
            
        }
        temp=i;
        while (temp!=0)
        {
            remainder=temp%10;
            sum=sum+round(pow(remainder,n_digits));
            temp=temp/10;
        }
        if (sum==i)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}