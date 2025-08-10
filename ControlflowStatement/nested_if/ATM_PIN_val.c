#include<stdio.h>
main(){
    int pin,count=0;
    start:
    printf("Enter your 4 digit pin: ");
    scanf("%4d",&pin);
    if(pin == 3241) puts("Welcome to SBI ATM");
    else{
        count++;
        if(count==3)puts("Your Card is blocked for 24 Hours");
        else {
            puts("Invalid PIN"); 
            goto start;
        }
    }
}