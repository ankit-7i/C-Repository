#include<stdio.h>
main(){

    int n;
    long int cube;
    printf("Enter any no");
    scanf("%d",&n);
    cube = (long) n*n*n;// explicit type casting
    printf("Cube of %d is %d",n,cube);
}