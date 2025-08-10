#include<stdio.h>
int main(){
    long n; int r,s=0;
    printf("Enter a number: ");
    scanf("%ld",&n);
    while(n!=0){
        r=n%10;
        s+=r;
        n/=10;
    }
    printf("Sum of digits: %d",s);
}