//Q2).WRITE A PROGRAM TO PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER.
#include<stdio.h>
int main(){
    int Num,N_table;
    printf("Enter your Number: ");
    scanf("%d",&Num);
    printf("THE MULTIPLICATION TABLE OF A %d IS\n",Num);
    for(int i=1;i<=10;i++){
        N_table=Num*i;
        printf("%d\n",N_table);
        
    }

    return 0;
}