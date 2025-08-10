#include<stdio.h>
#include<conio.h>
main(){
	int a = 1;
	printf("%d,%d,%d,%d,%d\n",++a,a++,a--,a++,++a);
	printf("%d,%d,%d,%d,%d\n",++a,a*10,a=10,a--,++a);
	getch();
}


// printf exucution strats from right to left and printing strats from left to right
