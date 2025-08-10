#include<stdio.h>
main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(!(ch>='A' && ch <='Z' || ch>='a' && ch<='z' || ch>='0' && ch<='9'))puts("It is a special char ");
    else puts("It is not a special char ");
}