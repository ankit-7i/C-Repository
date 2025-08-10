// finding even and odd using ternary operator 

#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter n value");
	scanf("%d",&n);
	puts(n%2 == 0 ? "Even number":"odd number");
	getch();
}
