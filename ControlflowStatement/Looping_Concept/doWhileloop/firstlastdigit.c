#include<stdio.h>
main(){
    long n; int r,max=-9,min=9;
    printf("Enter n value");
    scanf("%ld",&n);
    printf("Last digit =%d\n",n%10);
    while(n>9 || n<-9)n=n/10;
    printf("Last digit =%d\n",n);
}