#include<stdio.h>
int a=10;// global
main(){
    int a = 20;// local
    printf("a=%d\t",a);

{
    a = 30;// initialization
    printf("a=%d\t",a);
}

printf("a=%d\t",a);
}