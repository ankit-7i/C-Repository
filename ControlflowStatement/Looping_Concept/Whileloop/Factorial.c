#include<stdio.h>
main(){
    int n;
    long f=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>1){
        f=f*n;
        n--;
        }
        printf("Factorial of %d is %ld",n,f);
}