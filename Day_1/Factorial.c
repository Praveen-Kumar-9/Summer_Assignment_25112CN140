//Q3).WRITE A PROGRAM TO FIND FACTORIAL OF A NUMBER.
#include<stdio.h>
int main(){
    int num,i,fact=1;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&num);
    printf("The Factorial of %d is\n",num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("%d\n",fact);
    return 0;
}