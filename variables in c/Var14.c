#include<stdio.h>
int a = 10;
main(){
    printf("a=%d\t", a);// prints 10
    {
        int a = 20;
        printf("a=%d\t", a);// prints 20
    }
    printf("a=%d\t",a);// 10
}