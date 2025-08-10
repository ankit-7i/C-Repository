// finding life time of a local variable
#include<stdio.h>
void show(){
    int a=10;
    printf("a=%d",++a);
}/*a deleted*/
int main()
{
    show();
    show();
    show();
    /* code */
    return 0;
}
