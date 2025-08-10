// finding given number is +ve /-ve /0 without if-else /ternary opertor
#include<stdio.h>
#include<conio.h>
main(){
	int a ;
	printf("Enter a number ");
	scanf("%d",&a);
	a > 0 && printf("Positive number") || a < 0 && printf("Negative number") || a == 0 && printf("Zero");
	getch();
}
