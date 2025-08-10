// finding alphabet or not ?
#include<stdio.h>
main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch <='Z' || ch>='a' && ch<='z')puts("It is an alphabet");
    else puts("Not an alphabet");
}