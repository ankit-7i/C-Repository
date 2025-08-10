// read 2 int from input and swap without using operators
#include<stdio.h>
main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping:\n a=%d, b=%d\n",a,b);
    printf("After swapping:\n a=%d, b=%d\n",b,a);
}