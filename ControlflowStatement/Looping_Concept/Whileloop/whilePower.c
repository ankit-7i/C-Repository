#include<stdio.h>
main(){
    int b,p,r=1;
    printf("Enter base, Power values");
    scanf("%d%d",&b,&p);
    while(p>=1){
        r =r*b;
        p--;
    }
    printf("Result is %d",r);
}