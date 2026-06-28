//Q14).WRITE A PROGRAM TO FIND Nth FIBONACCI TERM.
#include<stdio.h>
int main(){
    int term;
    unsigned long long f_0=0,f_1=1,next_term,Nth_term=0;
    printf("Enter your term:");
    scanf("%d",&term);
    for (int i = 1; i <=term ; i++)
    {
        Nth_term=f_0;
        next_term=f_0+f_1;
        f_0=f_1;
        f_1=next_term;

    }
    printf("The %dth Fibonacci Term Is: %llu\n",term,Nth_term);
    return 0;
}