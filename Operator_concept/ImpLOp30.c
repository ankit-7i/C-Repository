// Finding MAX number in comparison between 2 number without using if-else or ternary operator 
#include<stdio.h>
#include<conio.h>
main(){
	int a,b;
	printf("User enter a value and b value ");
	scanf("%d %d",&a,&b);// & stores the address of a,b variable
	a>b && puts("a is big ") || puts("b is big"); 
	getch();
}
