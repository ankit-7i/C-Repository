// find +ve /-ve/0
#include<stdio.h>
main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n>0) puts ("Positive");
    else if (n<0) puts ("Negative");
    else puts ("Zero");
}