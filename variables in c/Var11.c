#include<stdio.h>
int a = 10;
main(){
    int a=20;
    printf("global a=%d\n",::a);
    printf("local a =%d\n",a);
}