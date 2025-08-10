// using 3rd var

#include<stdio.h>
main(){
    int a=10,b=29;
    printf("Before swap a=%d,b=%d",a,b);
    int c=a;
    a=b;
    b=c;
    printf("after swap a=%d,b=%d",a,b);
}