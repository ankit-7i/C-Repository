#include<stdio.h>
main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2==0)puts("Even");else puts("odd");
}
//even or odd