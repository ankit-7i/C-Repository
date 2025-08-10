// C program to find even / odd without using if-else or ternary operator

#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("User enter a number ");
	scanf("%d",&n);// & stores the address of n variable
	n %2 == 0 && puts("Even no he re");
	n% 2 != 0 && puts("Odd no he re");
	getch();
}
