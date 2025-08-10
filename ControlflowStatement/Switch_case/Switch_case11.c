#include<stdio.h>
main(){
    switch(10){
        case 10 || 20:printf("Hello\n");
        case 20 || 10:printf("Hi");break;
    }
}
// Error