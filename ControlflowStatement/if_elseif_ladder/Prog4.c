// finding max value 2no's 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b) puts("a is big");
    else if(b>a) puts("b is big");
    else puts("both are equal");
}