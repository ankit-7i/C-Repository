#include<stdio.h>
main(){
    float a = 1.1;
    if (a == 1.1f) puts("true");else puts("false");
    a=1.0;
    if (a == 1.0) puts("true");else puts("false");
    a=1.5;
    if (a == 1.5) puts("true");else puts("false");
    a=1.2;
    if (a == 1.2f) puts("true");else puts("false");
}