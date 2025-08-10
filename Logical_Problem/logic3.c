#include<stdio.h>
#define pi 3.14

int main(){
    float area,cf,r;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area = pi * r * r;
    cf = 2 *pi*r;
    printf("Circle Area: %.2f\n",area);
    printf("Circumfernce=%.2f",cf);
}