// finding scope of a local variable
#include<stdio.h>
void show(){
    int x = 10; // local variable
    printf("a=%d", x);
}
main(){
    show();
}