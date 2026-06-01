//Q8).WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME.
#include<stdio.h>
int  main(){
    int num,original_num,rem,rev=0; 
    printf("Enter your number:");
    scanf("%d",&num);
    original_num=num;
    while (num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=(rev*10)+rem;
    }
    if(original_num==rev){
        printf("The given number is PALINDROME");
    }
    else{
        printf("The given number is not palindrome...");
    }
    return 0;
}