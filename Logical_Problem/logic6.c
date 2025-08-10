#include<stdio.h>
main(){


    long int n,cube;
    printf("Enter any no");
    scanf("%d",&n);
    cube =  n*n*n;// explicit type casting
    printf("Cube of %d is %d",n,cube);
}