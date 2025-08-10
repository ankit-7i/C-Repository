#include<stdio.h>
main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'){
        printf("%c is a lowercase letter.",ch);
    }
    if(!(ch>='a'&& ch<='z')){
        printf("%c is not a lowercase letter.",ch);
    }
}