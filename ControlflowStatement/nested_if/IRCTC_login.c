#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
    char user[20],pass[20],cap[20];
    printf("Enter user name : "); scanf("%s",user);
    printf("Enter pass word : "); scanf("%s",pass);
    printf("Enter capcha : "); scanf("%s",cap);
    if(strcmp(user,"Ankit")==0)
    {
        if(strcmp(pass,"anki07")==0){
            if(strcmp(cap,"ghIu93")==0)puts("Welcome to IRCTC");
            else puts("Invalid capcha");
        }
        else puts("Invalid password");
    }
    else puts("Invalid user");
}