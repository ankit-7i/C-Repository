// Finding given no is a 2 digit no or not using ternary operator
#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	puts(n>10&&n<=99 || n<=-10&&n>=-99 ? "It is a 2 digit number" : "It is not a 2 digit number");
	getch();
}
