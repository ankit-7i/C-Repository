#include<stdio.h>
main(){
    int age;
    char gender;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter gender");
    scanf(" %c", &gender);
    if (age >=18 && gender == 'f'){
        printf("You are eligible for marriage");
    }
    else if (age >=21 && gender == 'm'){
        printf("You are eligible for marriage");
    }

    else {
        printf("You are not eligible for marriage");
    }

}