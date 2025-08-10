#include<stdio.h>
int a=10;// global variable
void show(){
    printf("a=%d",++a);
}
main(){
    show();
    show();
    show();
}
//after main a deleted and re run and restarted 