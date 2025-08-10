#include<stdio.h>
#include<conio.h>
main(){
    int age;
    char gen;
    printf("Enter person age");scanf("%d",&age);
    printf("Enter gender[m/f] ");scanf("%c",&gen);
    if(gen == 'm' || gen == 'M' || gen == 'f' || gen == 'F'){
        if(age>=21 || (gen =='f' || gen == 'F') && age>=18) puts ("Eligible for marriage");
        else puts("Not Eligible for marriage");
    }
    else puts("Invalid Gnder");
}
