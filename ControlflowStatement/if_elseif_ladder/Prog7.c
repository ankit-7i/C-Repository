#include<stdio.h>
main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >='a' && ch <='z') puts ("Lowercase");
    else if (ch >='A' && ch <='Z') puts ("Uppercase");
    else if (ch >= '0' && ch <= '9') puts ("Digit");
    else if (ch == ' ') puts ("Space");
    else puts ("Special character");
}