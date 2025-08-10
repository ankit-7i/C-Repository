#include<stdio.h>
main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if((n&1)==0)puts("Even");else puts("odd");
}
// even odd without using arithmetic operators