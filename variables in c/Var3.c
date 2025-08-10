#include<stdio.h>
float a;
int b;
char c; /*Global variable*/
main(){
    float x;
    int y;
    char z;
    // local variables
    printf("a=%f, b=%d, c=%c\n", a, b, c);
    printf("x=%f,y=%d,z=%c\n",x,y,z);
}