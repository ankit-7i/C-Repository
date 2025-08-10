#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
    char user[20],pass[20],cap[20];
    printf("Enter username : "); scanf("%s",user);
    printf("Enter password : "); scanf("%s",pass);
    printf("Enter captcha : "); scanf("%s",cap);
    if(strcmp(user,"Ankit")==0 && strcmp(pass,"1234")==0 && strcmp(cap,"1234")==0)
    puts("Welcome to SBI Net Banking");
    else puts ("Invalid username or password");
}