//Q7).WRITE A PROGRAM TO FIND PRODUCT OF DIGITS.
#include<stdio.h>
int  main(){
    int num,product=1,count; 
    printf("Enter your number:");
    scanf("%d",&num);
    if (num==0)//if user enters 0 it will print 0.
    {
        printf("The product of digits of a given number is %d",num);
    }
    else{
    while (num!=0)
    {
        count=num%10;//it gives last digit of a number.
        num=num/10;//it removes last digit of a number.
        product=product*count;//it multiply digits of a given number.
    }
    printf("The product of digits of a given number is %d",product);
}
    return 0;
}