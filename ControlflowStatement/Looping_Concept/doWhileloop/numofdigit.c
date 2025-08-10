#include<stdio.h>
main(){
    long n; int c=0;
    printf("n value");
    scanf("%ld",&n);
    do{
        c++;
        n/=10;
    }while(n!=0);
    printf("number of digits in %ld is %d",n,c);
}