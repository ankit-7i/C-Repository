#include<stdio.h>
main(){
    long n,i;
    printf("Enter the no");
    scanf("%ld",&n);
    if(n==1)puts("Not a prime/composite no");
    else {
        for (i=2;i<=n/2;i++){
            if(n%1==0){
                puts("Not a prime/composite no");
                return;
            }
            puts("prime");
        }
    }
}