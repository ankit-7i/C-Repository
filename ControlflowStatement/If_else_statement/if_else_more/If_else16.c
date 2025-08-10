// finding upper case char or not ?
#include<stdio.h>
main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch <='Z')puts("Upper case char");
    else puts("Not a Upper case char");
}