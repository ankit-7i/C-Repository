#include<stdio.h>
main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch(n%2){
        case 0:puts("Even");break;
        default : puts("odd");
    }
}