//using [pow]
#include<stdio.h>
int main(){
    int b,p; long s= 0;
    printf("Enter base and power: ");
    scanf("%d%d",&b,&p);
    while(p>=1){
        s+=pow(b,p);
        p--;

    }
    printf("power sum =%ld",s);
}