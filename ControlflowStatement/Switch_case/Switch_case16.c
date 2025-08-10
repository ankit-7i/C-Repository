#include<stdio.h>
main(){
    int a;
    switch( a= printf("I\t"),printf("Am\t")){
        case 1:printf("Indian");break;
        case 2:printf("Bharathiyudu");break;
        case 3:printf("Hindustani");break;
        default: printf("Human Being");
    }
    printf("\na=%d",a);
}