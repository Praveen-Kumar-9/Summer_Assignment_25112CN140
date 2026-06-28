//Q13).WRITE A PROGRAM TO GENERATE FIBONACCI SERIES.
#include<stdio.h>
int main(){
    unsigned long long f_0=0,f_1=1,next_term; int n;
    printf("Enter Number Of Terms:");
    scanf("%d",&n);
    printf("FIBONACCI SERIES:");
    for (int i = 1; i <= n; i++)
    {
        printf("[%llu], ",f_0);
        next_term=f_0+f_1;
        f_0=f_1;
        f_1=next_term;
    }
    return 0;
}