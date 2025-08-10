// 2^5 =2^1+2^2+2^3+2^4+2^5
#include<stdio.h>
main(){
    int base,pow,r=1;
    int sum=0;
    printf("Enter the base of the base:\n ");
    scanf("%d",&base);
    printf("Enter the power of the pow:\n ");
    scanf("%d",&pow);
    while(pow>=1){
        r=r*base;
        sum+=r;
        pow--;


    }
    printf(" sum res =%d",sum);
}    