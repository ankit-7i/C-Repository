#include<stdio.h>
main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n/2*2==n)puts("Even");else puts("odd");
}
//even or odd without using modulus operator