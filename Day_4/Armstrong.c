//Q15).WRITE A PROGRAM TO CHECK ARMSTRONG NUMBER.
#include<stdio.h>
#include<math.h>
int main(){
    int num,original_num,temp,remainder,sum=0,n_digits=0,count=0;
    printf("Enter your number:");
    scanf("%d",&num);
    original_num=num;
    temp=num;  
    for (int i = temp; temp!=0; temp=temp/10)
    {
        n_digits++;
    }
    printf("The Total number Of Digits in %d is %d\n",num,n_digits);
    temp=num;
    while (temp!=0)
    {
        remainder=temp%10;
        sum=sum+round(pow(remainder,n_digits));
        temp=temp/10;
    }
    if (sum==original_num)
    {
        printf("%d IS AN ARMSTRONG NUMBER",original_num);
    }
    else
    {
        printf("%d IS NOT AN ARMSTRONG NUMBER (CALCULATED SUM = %d.)\n",original_num,sum);
    }
    return 0;
}