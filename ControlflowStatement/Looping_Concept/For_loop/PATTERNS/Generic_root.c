#include<stdio.h>
main(){
    long n,s;
    printf("Enter a no");
    scanf("%ld",&n);
    while(n>9){
        for(s=0;n!=0;n/=10){
            s+=(n%10);
        }
        n=s;
    }
    printf("Generic root=%d",n);
}