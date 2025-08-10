// Finding Max In 2 number using ternary operator 
#include<stdio.h>
#include<conio.h>
main(){
	int a,b;
	printf("Enter a,b values");
	scanf("%d\n %d",&a,&b);
	puts(a>b ? "a is big": b>a ? "b is big": "both are equal");
	getch();
}
