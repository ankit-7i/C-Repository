// prime no or composite no
#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==1)puts("Not a prime number/composite number");
    else{
        for(i=1;i<=n;i++){
            if(n%i==0)c++;
        }
        puts(c==2?"prime no ":"composite no");
    }
}