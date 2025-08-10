// rev num using while
#include<stdio.h>
main(){
    long n,rev=0; int r;
    printf("Enter a number: ");
    scanf("%ld",&n);
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse number is: %ld",rev);
}