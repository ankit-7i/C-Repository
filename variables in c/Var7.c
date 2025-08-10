#include<stdio.h>
int a = 10;//local variable
void show(){
    printf("a=%d\n",a);
}
main(){
    show();
    printf("a=%d",a);
}