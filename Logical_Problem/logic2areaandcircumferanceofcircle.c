#include<stdio.h>

main(){
    const float pi=3.14;
    float area,cf,r;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area=pi*r*r;
    cf=2*pi*r;
    printf("The area of the circle is: %.2f\n",area);
    printf("The circumference of the circle is: %.2f\n",cf);
}