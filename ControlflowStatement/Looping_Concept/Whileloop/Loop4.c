#include<stdio.h>
main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>=1)printf("%4d",n--);
}