//Q9).WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS PRIME.
#include<stdio.h>
int main(){
    int num,i,count=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    if (num<=1){
        printf("%d is not a Prime Number",num);
    }
    else{
        for ( i = 1; i <= num; i++)
        {
            if(num%i==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        {
            printf("%d is a Prime Number",num);
        }
        else
        {
            printf("%d is not a Prime Number",num);
        }   
    }
    return 0;
}