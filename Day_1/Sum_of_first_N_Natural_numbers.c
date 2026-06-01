//Q1).Write a program to calculate sum of first N natural numbers.
#include<stdio.h>
int main(){
    int N,i,sum=0;
    printf("Print the number N = ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum=sum+i;
    }  
    printf("the sum of fist %d natural number =%d",N,sum);
    return 0;
}