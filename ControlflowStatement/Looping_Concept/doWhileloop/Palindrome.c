#include<stdio.h>
main(){
    long m,n,rev=0; int r;
    printf("Enter n val :");
    scanf("%ld",&n);
    m=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    puts(m==rev?"palindrome":"not palindrome");
}