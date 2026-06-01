//Q5).WRITE A PROGRAM TO FIND SUM OF DIGITS OF A NUMBER.
#include<stdio.h>
int main(){
    int  num, count,sum=0;
    printf("Enter your number:");
    scanf("%d",&num);//Take input from user.
    printf("The sum of Digits of number%d ",num);
    while (num!=0)
    {
        count=num%10;//it gives last digit from given number.
        num=num/10;//it removes last digit from given number.
        sum=sum+count;//add all digits of a given number.
    }
    printf("is %d",sum);
    
    return 0;
}