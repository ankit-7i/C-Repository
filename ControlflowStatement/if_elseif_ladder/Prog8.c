#include<stdio.h>
main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >=97 && ch <=122) puts ("Lowercase");
    else if (ch >=65 && ch <=90) puts ("Uppercase");
    else if (ch >= 48 && ch <= 57) puts ("Digit");
    else if (ch == 32) puts ("Space");
    else puts ("Special character");
}