//Q12).WRITE A PROGRAM TO FIND LCM OF TWO NUMBERS.
#include<stdio.h>
int main(){
    int num1,num2,i,LCM,gcd;
    printf("Enter Your first Number:");
    scanf("%d",&num1);
    printf("Enter Your second Number:");
    scanf("%d",&num2);
    printf("THE LCM OF %d and %d is ",num1,num2);
    gcd=1;
    for ( i = 1; i <= num1 && i <= num2; i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            gcd=i;
        }
    }
    LCM=(num1*num2)/gcd;
    printf("%d",LCM);
    return 0;
}