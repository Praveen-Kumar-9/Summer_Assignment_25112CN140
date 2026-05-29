//Q5).WRITE A PROGRAM TO FIND SUM OF DIGITS OF A NUMBER.
#include<stdio.h>
int main(){
    int num,sum;
    printf("Enter your number:");
    scanf("%d",&num);
    printf("The sum of digits of a %d is\n",num);
    sum=(num/100)+((num/10)%10)+(num%10);
    printf("%d",sum);
    return 0;
}