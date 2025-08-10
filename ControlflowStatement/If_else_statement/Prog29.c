// absolute value of given no {always +ve}

#include<stdio.h>
main(){
    int n;
    printf("Enter a no");
    scanf("%d",&n);
    if(n<0)n=-n;
    printf("Absolute value of %d is %d",n,n);
}