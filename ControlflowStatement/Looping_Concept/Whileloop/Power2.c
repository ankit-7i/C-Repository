// finding 2^5=32
#include<stdio.h>
main(){
    int b,p;
    long r=1;
    printf("Enter base: ");
    scanf("%d",&b);
    printf("Enter power: ");
    scanf("%d",&p);
    while(p>=1){
        r=r*b;
        p--;
    }
    
    printf("Result: %ld",r);
}