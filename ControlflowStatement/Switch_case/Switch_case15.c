#include<stdio.h>
main(){

    int a=97,b=98;
    switch(a++ , b++){
        case 'a':printf("Hello\n");break;
        case 'b':printf("Hi");break;
        default : printf("No\n");break;
    }
}