//Q4).WRITE A PROGRAM TO COUNT DIGITS IN A NUMBER.
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter your number:");
    scanf("%d",&num);
    do
    {
        num=num/10;
        count++;
    } while (num != 0);
    printf("The total number of digits =%d",count);
    return 0;
}