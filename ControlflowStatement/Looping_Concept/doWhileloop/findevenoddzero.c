#include<stdio.h>
int main(){
    long n ;
    int r,e,o,z;
    e=o=z=0;
    printf("Enter a number: ");
    scanf("%ld",&n);
    do{
        r=n%10;
        if(r==0)z++;
        else if(r%2==0)e++;
        else o++;
        n/=10;
    }while(n!=0);
    printf("Number of zeros: %d\n",z);
    printf("Number of even numbers: %d\n",e);
    printf("Number of odd numbers: %d\n",o);
}