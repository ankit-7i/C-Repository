#include<stdio.h>
main(){
    if( 5 && 5 ==5)printf("true");else printf("false");
    if((5&&5)==5) printf("True"); else printf("False");
}
// Relaional operator having higher precedence than logical operator