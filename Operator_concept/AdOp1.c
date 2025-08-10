/*
Address operators: 
1. & - Address of the variable 
2. * - pointer – Address of another variable

*/

#include<stdio.h>
#include<conio.h>
main(){
	int n =100;// Variable
	int *p; // pointer variable
	printf("n value %d\n",n);
	printf("n value %u\n",&n);
	p = &n; // var n address stored in pointer p
	printf("p value %u",p);
	getch();
}
