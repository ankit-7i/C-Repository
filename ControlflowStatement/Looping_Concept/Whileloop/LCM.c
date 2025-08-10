#include<stdio.h>
main(){
    int a,b,max;
    printf("Enter a , b values");
    scanf("%d%d",&a,&b);
    max = a>b ? a:b;
    while(1){
        if(max%a == 0 && max%b == 0){
            printf("%d is the LCM of ",max);break;
        }
        max++;
    }
}