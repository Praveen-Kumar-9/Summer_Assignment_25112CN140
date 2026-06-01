//Q6).WRITE A PROGRAM TO REVERSE A NUMBER.
#include<stdio.h>
int  main(){
    int num,rem,rev=0; 
    printf("Enter your number:");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%10;//it gives the last digit of a given number.
        num=num/10;//it removes the last digit of a given number.
        rev=(rev*10)+rem;//it multiply rev value by 10 and add remainder value to reverse the number.
    }
    printf("THE REVERSE OF A GIVEN NUMBER IS: %d ",rev);
    
    return 0;
}