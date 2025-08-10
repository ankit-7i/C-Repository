// finding lower case char or not using if..else ?
#include<stdio.h>
main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch <='z')puts("Lower case char");
    else puts("Not a lower case char");
}