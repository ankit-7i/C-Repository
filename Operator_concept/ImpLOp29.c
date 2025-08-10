#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("User enter a number ");
	scanf("%d",&n);// & stores the address of n variable
	n %2 == 0 && puts("Even no he re") || puts("Odd no he re");
	getch();
}
