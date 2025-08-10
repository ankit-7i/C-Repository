// Finding the next 10 multiple of given number based on the last digit using ternary operator (rounding of no to its next multiple of 10)
#include<stdio.h>
#include<conio.h>
main(){
	int n;
	printf("Enter n value");
	scanf("%d",&n);
	printf("%d", n%10>=5 ? (n/10+1)*10 : n/10*10);
	getch();
}

