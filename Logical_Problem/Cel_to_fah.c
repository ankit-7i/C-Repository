#include<stdio.h>
#include<conio.h>
main(){
    float c,f;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);
    f = c * 1.8 + 32;
    printf("Temperature in Fahrenheit: %.2f",f);
    getch();
}