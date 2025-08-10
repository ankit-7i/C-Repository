// finding storage location of local and global variables
#include<stdio.h>
int a = 100;//global variable
main(){
    int b = 100;//local variable
    printf("global a address=%u,local b address=%u", &a, &b);
    return 0;
}